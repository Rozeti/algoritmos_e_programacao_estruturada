#include<stdio.h>
#define MAX 3

typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Aluno;

int gerarID(int indice){
    indice++;
    return indice;
}

void cadastrar(Aluno a[], int indice){
    printf("\n-->Digite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);

    printf("-->Digite a idade do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);

    a[indice].id = gerarID(indice) + 1;
    a[indice].status = 1;
}

void listarAlunos(Aluno a[], int indice){
    if (indice == 0){
        printf("\n\nOpa nao tem nenhum registro na lista\n\n");
    }else{
        for (int i = 0; i < indice; i++){
                printf("--> Nome: %s", a[i].nome);
                printf("--> Idade: %d\n", a[i].idade);
                printf("--> ID: %d\n", a[i].id);
                printf("--> Statis: %d\n\n", a[i].status);
                if(a[i].status == 1){
                    printf("\n Status: ativo");
                }else {
                    printf("\n Status: desativado");
                }
            }  
    }
}
void listarEspecifico(Aluno a[], int indice){
    int escolha;
    if (indice == 0){
        printf("\n\nOpa nao tem nenhum registro na lista\n\n");
    }else{
        printf("-> Digite 1 - Mostrar ativos, 2 - Mostrar desativados ou 3 - Mostrar todos: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
        case 1:
            printf("--> Lista de contas ativas: \n");
            for (int i = 0; i < indice; i++){
                if (a[i].status == 1){
                printf("--> Nome: %s", a[i].nome);
                printf("--> Idade: %d\n", a[i].idade);
                printf("--> ID: %d\n", a[i].id);
                printf("--> Status: %d\n\n", a[i].status);
                }
            }  
            break;
        case 2:
            printf("--> Lista de contas Desativadas: \n");
            for (int i = 0; i < indice; i++){
                if (a[i].status == 0){
                printf("--> Nome: %s", a[i].nome);
                printf("--> Idade: %d\n", a[i].idade);
                printf("--> ID: %d\n", a[i].id);
                printf("--> Status: %d\n\n", a[i].status);
                }
            }  
            break;
        case 3:
            listarAlunos(a, indice);
            break;
        }
    } 
}

void buscar(Aluno a[], int indice, int buscarID){
    if (indice == 0){
        printf("\n\nOpa nao tem nenhum registro na lista\n\n");
        return;
    }else {
        for (int i = 0; i < indice; i++){
            if (buscarID == a[i].id){
                printf("\nEncontrado: ");
                printf("\n--> Nome: %s", a[i].nome);
                printf("--> Idade: %d\n", a[i].idade);
                printf("--> ID: %d\n\n", a[i].id);
                return;
            }
        }
    }
    printf("\nO ID informado nao existe na lista.\n\n");
}

void editar(Aluno a[], int indice, int buscarID){
    int opcao; 

    if (indice == 0){
        printf("\n\nOpa nao tem nenhum registro na lista\n\n");
        return;
    }else {
        for (int i = 0; i < indice; i++){
            if (buscarID == a[i].id){
                printf("\nEncontrado: ");
                printf("\n--> Nome: %s", a[i].nome);
                printf("--> Idade: %d\n", a[i].idade);
                printf("--> ID: %d\n\n", a[i].id);
                printf("\n--> Qual dos dados voce quer alterar: ");
                printf("\n--> 1 - Nome");
                printf("\n--> 2 - Idade");
                printf("\n--> 3 - Status");
                printf("\n--> 4 - Alterar todos os campos\n");
                printf("-> Opcao escolhida: ");
                fflush(stdin);
                scanf("%d", &opcao);
                fflush(stdin);

                if (opcao == 1){
                    printf("\n--> Opcao 1 - Nome: ");
                    printf("\n--> Nome: ");
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    printf("\n---> Item alterado com sucesso!!");
                    printf("\n\n ");
                } else if (opcao == 2){
                    printf("\n--> Opcao 2 - Idade: ");
                    printf("\n--> Idade: ");
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    printf("\n---> Item alterado com sucesso!!");
                    printf("\n\n ");
                } else if (opcao == 3){
                    printf("\n--> Opcao 3 - Status: ");
                    printf("\n--> Status da conta: ");
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                    printf("\n---> Item alterado com sucesso!!");
                    printf("\n\n ");
                } else if (opcao == 4){
                    printf("\n--> Opcao 3 - Alterar todos os campos: ");
                    printf("\n--> Nome: ");
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    printf("--> Idade: ");
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    printf("\n--> Status da conta: ");
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                    printf("\n---> Item alterado com sucesso!!");
                    printf("\n\n ");
                }
                return;
            }
        }
    } 
    printf("\nO ID informado nao existe na lista\n\n");
}

void excluir(Aluno a[], int indice, int buscarID){
    for (int i = 0; i < indice; i++){
        if (buscarID == a[i].id){
            for (int j = i; i < indice - 1; j++){
                a[j] = a[j + 1];
            }
            printf("\nExcluido com sucesso");
            return;
        }  
    }
    printf("Registro nao encontrado");
}

main(){
    Aluno a[MAX];
    int totalCadastros = 0, opcao, buscaID;
    char decisao[2];
    do{
        printf("Digite 1 para cadastrar");
        printf("\nDigite 2 para listar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair do sistema");
        printf("\n\n->Digite a opcao escolhida: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (totalCadastros < MAX){
                cadastrar(a, totalCadastros);
                totalCadastros++;
                printf("\n\nCadastro realizado com sucesso!\n\n");
            }else{
                printf("\n\nCapacidade maxima de cadastro atingida!\n\n");
                //opcao = 0;
            }
            break;
        case 2:
            listarAlunos(a, totalCadastros);
            break;
        case 3:
            printf("\n-> Informe o ID do aluno para buscar: ");
            scanf("%d", &buscaID);
            fflush(stdin);
            buscar(a, totalCadastros, buscaID);
            break;
        case 4:
            printf("\n-> Informe o ID do aluno para buscar: ");
            scanf("%d", &buscaID);
            fflush(stdin);
            editar(a, totalCadastros, buscaID);
            break;
        case 5:
            printf("\n-> Informe o ID do aluno para buscar: ");
            scanf("%d", &buscaID);
            fflush(stdin);
            printf("\n-> Deseja mesmo excluir? s / n: ");
            scanf("%c", &decisao);
            fflush(stdin);
            if (decisao == 's'){
                excluir(a, totalCadastros, buscaID);
            }else {
                printf("\nDecidiu nao excluir!!");
                totalCadastros--;
            }
            excluir(a, totalCadastros, buscaID);
            break;
        }
    } while (opcao != 0);
}
