#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int cod;
    char descricao[200];
    int quantidade;
    float valor;
    struct Produto *prox;
} Produto;

Produto* criarListaVazia(){
    return NULL;
}

Produto *criarProduto() {
    Produto *p = (Produto *) malloc(sizeof(Produto));
    
    if (p == NULL) {
        printf("Erro ao alocar memoria\n");
        exit(EXIT_FAILURE);
    }
    p->prox = NULL;
    return p;
}

Produto *cadastrar(Produto *lista) {
    Produto *p = criarProduto();

    printf("\n--> Informe o codigo do produto (com apenas numeros): ");
    scanf("%d", &p->cod);
    fflush(stdin);

    printf("--> Informe a descricao do produto: ");
    fgets(p->descricao, sizeof(p->descricao), stdin);
    fflush(stdin);

    printf("--> Informe a quantidade: ");
    scanf("%d", &p->quantidade);
    fflush(stdin);

    printf("--> Informe o valor do produto: R$ ");
    scanf("%f", &p->valor);
    fflush(stdin);

    if (lista == NULL) {
        lista = p;
    } else {
        Produto *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        atual->prox = p;
    }
    return lista;
}

Produto *listar(Produto *lista) {
    if (lista == NULL) {
        printf("\n* Lista vazia *");
    } else {
        Produto *atual = lista;
        printf("\n\n---> Lista dos Produtos: ");
        while(atual != NULL) {
            printf("\n\n-> Codigo do produto: %d", atual->cod);
            printf("\n-> Descricao do produto: %s", atual->descricao);
            printf("-> Quantidade do produto: %d\n", atual->quantidade);
            printf("-> Valor do produto: R$ %.2f\n", atual->valor);
            atual = atual->prox;
        }
    }
    return lista;
}

Produto *buscar(Produto *lista) {
    if (lista == NULL) {
        printf("\n* Lista vazia *");
    } else {
        int codBusca;
        Produto *atual = lista;

        printf("\n--> Informe o codigo do produto a ser buscado: ");
        scanf("%d", &codBusca);
        fflush(stdin);
        
        while(atual != NULL) {
            if (atual->cod == codBusca) {
                printf("\n\n---> Produto encontrado: ");
                printf("\n\n-> Codigo do produto: %d", atual->cod);
                printf("\n-> Descricao do produto: %s", atual->descricao);
                printf("-> Quantidade do produto: %d\n", atual->quantidade);
                printf("-> Valor do produto: R$ %.2f\n", atual->valor);
                return lista;
            }
            atual = atual->prox;
        }
        printf("\n# Codigo do produto nao encontrado.");
    }
    return lista;
}

Produto *excluir(Produto *lista) {
    int codBusca;
    Produto *atual = lista;
    Produto *anterior = NULL;

    if (lista == NULL) {
        printf("\n* Lista vazia *");
    } else {
        printf("\n--> Informe o codigo do produto a ser excluido: ");
        scanf("%d", &codBusca);
        
        while(atual != NULL) {
            if (atual->cod == codBusca) {
                if (anterior == NULL) {
                    lista = atual->prox;
                } else {
                    anterior->prox = atual->prox;
                }
                free(atual);
                printf("\n-> Produto excluido com sucesso!!");
                return lista;
            }
            anterior = atual;
            atual = atual->prox;
        }
        printf("\n# Produto nao cadastrado!");
    }
    return lista;
}

void liberarLista(Produto *lista){
    Produto *atual = lista;
    Produto *proximoProduto;
    while (atual != NULL){
        proximoProduto = atual->prox;
        free(atual);
        atual = proximoProduto;
    }
}

main() {
    Produto *lista = criarListaVazia();
    int opcao;

    do {
        printf("\n\n-----> Menu de escolha <-----");
        printf("\n1 - Cadastrar novo produto\n");
        printf("2 - Listar todos os produtos\n");
        printf("3 - Buscar produto\n");
        printf("4 - Excluir\n");
        printf("0 - Sair\n");
        printf("\n--> Qual a sua opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);

        switch(opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                lista = listar(lista);
                break;
            case 3:
                lista = buscar(lista);
                break;
            case 4:
                lista = excluir(lista);
                break;
        }
    } while(opcao != 0);
    liberarLista(lista);
}