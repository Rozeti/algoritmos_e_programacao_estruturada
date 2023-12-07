#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

typedef struct {
    int id;
    char proprietario[50];
    int combustivel;
    char modelo[50];
    char cor[50];
    char nuChassi[50];
    int ano;
    char placa[8];
    struct Veiculo *prox;
} Veiculo;

Veiculo* criarListaVazia(){
    return NULL;
}

Veiculo *criarRegistro() {
    Veiculo *carro = (Veiculo *) malloc(sizeof(Veiculo));
    
    if (carro == NULL) {
        printf("\n\n **Nao foi possivel alocar memoria**");
        exit(EXIT_FAILURE);
    }
    carro->prox = NULL;
    return carro;
}

Veiculo *cadastrar(Veiculo *lista) {
    Veiculo *registroCarro = criarRegistro();

    printf("--> Informe o nome do proprietario do veiculo: ");
    fgets(registroCarro->proprietario, sizeof(registroCarro->proprietario), stdin);
    fflush(stdin);

    do {
        printf("--> Informe o tipo de combustivel utilizado(1 - Alcool, 2 - Diesel ou 3 - Gasolina): ");
        scanf("%d", &registroCarro->combustivel);
        fflush(stdin);
    } while (registroCarro->combustivel < 1 || registroCarro->combustivel > 3);

    printf("--> Informe o modelo do veiculo: ");
    fgets(registroCarro->modelo, sizeof(registroCarro->modelo), stdin);
    fflush(stdin);

    printf("--> Informe a cor do veiculo: ");
    fgets(registroCarro->cor, sizeof(registroCarro->cor), stdin);
    fflush(stdin);

    printf("--> Informe o numero do chassi do veiculo: ");
    fgets(registroCarro->nuChassi, sizeof(registroCarro->nuChassi), stdin);
    fflush(stdin);

    printf("--> Informe o ano de fabricacao do veiculo: ");
    scanf("%d", &registroCarro->ano);
    fflush(stdin);

    do {
        printf("--> Informe o numero da placa do veiculo (com 3 letras no inicio e 4 algarismos no final): ");
        fgets(registroCarro->placa, sizeof(registroCarro->placa), stdin);
        fflush(stdin);

        if (isalpha(registroCarro->placa[0]) && isalpha(registroCarro->placa[1]) && isalpha(registroCarro->placa[2]) && isdigit(registroCarro->placa[3]) && isdigit(registroCarro->placa[4]) && isdigit(registroCarro->placa[5]) && isdigit(registroCarro->placa[6])) {
            break;
        } else {
            printf("Numero de placa invalido. Tente novamente.\n");
        }
    } while (1);

    if (lista == NULL) {
        registroCarro->id = 1;
        lista = registroCarro;
    } else {
        Veiculo *atual = lista;
        while (atual->prox != NULL) {
            atual = atual->prox;
        }
        registroCarro->id = atual->id + 1; 
        atual->prox = registroCarro;
    }
    return lista;
}

Veiculo *listar(Veiculo *lista) {
    if (lista == NULL) {
        printf("# Lista vazia #");
    } else {
        Veiculo *atual = lista;
        while (atual != NULL) {
            printf("\n---> Lista de Registros:\n\n");
            printf("-> Nome do Proprietario: %s", atual->proprietario);
            printf("-> Combustivel: %d\n", atual->combustivel);
            printf("-> Modelo do vaiculo: %s", atual->modelo);
            printf("-> Cor do veeiculo: %s", atual->cor);
            printf("-> Numero do chassi: %s", atual->nuChassi);
            printf("-> Ano de fabricacao: %d\n", atual->ano);
            printf("-> Numero da placa: %s\n", atual->placa);
            printf("-> ID: %d\n", atual->id);
            printf("\n");
            atual = atual->prox;
        }
    }
    return lista;
}

void listarProprietarios2010(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (atual->ano >= 2010 && atual->combustivel == 2) {
            printf("-> Nome do proprietario: %s", atual->proprietario);
        }
        atual = atual->prox;
    }
}

bool placaComJ(char *placa) {
    return (placa[0] == 'J' && (placa[7] == '0' || placa[7] == '2' || placa[7] == '4' || placa[7] == '7'));
}

void listarPlacasJ(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        if (placaComJ(atual->placa)) {
            printf("-> Placa: %s", atual->placa);
            printf("\n-> Proprietario: %s", atual->proprietario);
        }
        atual = atual->prox;
    }
}

void listarModeloCor(Veiculo *lista) {
    Veiculo *atual = lista;
    while (atual != NULL) {
        char segundaLetraPlaca = tolower(atual->placa[1]);
        int somaNumerosPlaca = atoi(atual->placa + 3) + atoi(atual->placa + 4) + atoi(atual->placa + 5) + atoi(atual->placa + 6);

        if (strchr("aeiou", segundaLetraPlaca) && somaNumerosPlaca % 2 == 0) {
            printf("-> Modelo do veiculo: %s", atual->modelo);
            printf("\n-> Cor do veiculo: %s", atual->cor);
        }
        atual = atual->prox;
    }
}

void trocarProprietario(Veiculo *lista) {
    Veiculo *atual = lista;
    char nuChassi[50];

    printf("--> Digite o numero do chassi: ");
    scanf("%s", nuChassi);

    while (atual != NULL) {
        if (strcmp(atual->nuChassi, nuChassi) == 0) {
            if (!strchr(atual->placa, '0')) {
                printf("--> Digite o nome do novo proprietario: ");
                getchar(); 
                fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
                fflush(stdin);
                break;
            } else {
                printf("* Troca de proprietario nao permitida, pois a placa informada possui pelo menos um digito igual a zero *\n");
            }
        }
        atual = atual->prox;
    }
}

Veiculo *buscar(Veiculo *lista) {
    if (lista == NULL) {
        printf("# Lista vazia #\n");
    } else {
        int id;
        printf("--> Informe o ID a ser buscado: ");
        scanf("%d", &id);
        
        Veiculo *atual = lista;
        while (atual != NULL) {
            if (atual->id == id){
                printf("\n---> Encontrado: ");
                printf("\n");
                printf("\n-> Nome do Proprietario: %s", atual->proprietario);
                printf("-> Combustivel: %d\n", atual->combustivel);
                printf("-> Modelo do vaiculo: %s", atual->modelo);
                printf("-> Cor do veeiculo: %s", atual->cor);
                printf("-> Numero do chassi: %s", atual->nuChassi);
                printf("-> Ano de fabricacao: %d\n", atual->ano);
                printf("-> Numero da placa: %s\n", atual->placa);
                printf("-> ID: %d\n", atual->id);
                printf("\n");
                break;
            }else if (atual->id != id){
                printf("# ID informaado nao encontrado # ");
                break;
            }
            atual = atual->prox;
        }
    }
    return lista;
}

Veiculo *excluir(Veiculo *lista) {
    if (lista == NULL) {
        printf("Lista vazia\n");
    } else {
        int id;
        printf("Informe o ID: ");
        scanf("%d", &id);

        Veiculo *atual = lista;
        Veiculo *anterior = NULL;
        while (atual != NULL) {
            if (atual->id == id) {
                if (anterior == NULL) {
                    lista = atual->prox;
                } else {
                    anterior->prox = atual->prox;
                }
                free(atual);
                break;
            }
            anterior = atual;
            atual = atual->prox;
        }
    }
    return lista;
}

void liberarLista(Veiculo *lista){
    Veiculo *atual = lista;
    Veiculo *proximoRegistro;
    while (atual != NULL){
        proximoRegistro = atual->prox;
        free(atual);
        atual = proximoRegistro;
    }
}

main() {
    Veiculo *lista = criarListaVazia();
    int opcao;

    do {
        printf("\n\n-----> REGISTRO DE VEICULO <-----");
        printf("\n-> 1 - Cadastrar");
        printf("\n-> 2 - Listar");
        printf("\n-> 3 - Buscar registro");
        printf("\n-> 4 - Listar todos os proprietarios com carros movidos a disel e fabricados a partir de 2010");
        printf("\n-> 5 - Listar todos os proprietarios com placas de carro que comece com 'J' e termine em 0, 2, 4 ou 7");
        printf("\n-> 6 - Listar modelo e cor de veiculos cuja segunda letra da placa eh uma vogal e a soma dos numeros da placa eh par");
        printf("\n-> 7 - Trocar proprietario de carros cujo numero da placa nao possui nenhum digito '0'");
        printf("\n-> 8 - Excluir registro");
        printf("\n-> 0 - Sair do sistema");
        printf("\n\n--> Qual a sua opcao: ");
        scanf("%d", &opcao);
        fflush(stdin);
        printf("\n\n");

        switch (opcao) {
            case 1:
                lista = cadastrar(lista);
                break;
            case 2:
                listar(lista);
                break;
            case 3:
                lista = buscar(lista);
                break;
            case 4:
                listarProprietarios2010(lista);
                break;
            case 5:
                listarPlacasJ(lista);
                break;
            case 6:
                listarModeloCor(lista);
                break;
            case 7:
                trocarProprietario(lista);
                break;
            case 8:
                lista = excluir(lista);
                break;
        }
    } while (opcao != 0);
    
    liberarLista(lista);
}