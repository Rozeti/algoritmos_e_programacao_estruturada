#include<stdio.h>
#define MAX 3

typedef struct{
    char nome[20];
    int idade;
    int id;
}Aluno;

void cadastrar(Aluno a[], int indice){
    printf("\n-->Digite o nome do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);

    printf("-->Digite a idade do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].idade);

    printf("-->Digite o ID do aluno: ");
    fflush(stdin);
    scanf("%d", &a[indice].id);
}

void listarAlunos(Aluno a[], int indice){
    if (indice == 0){
        printf("\n\nOpa nao tem nenhum registro na lista\n\n");
    }else{
    for (int i = 0; i < indice; i++){
            printf("--> Nome: %s", a[i].nome);
            printf("--> Idade: %d\n", a[i].idade);
            printf("--> ID: %d\n\n", a[i].id);
        }  
    }
}

void buscar(Aluno a[], int indice){
    int busca;
    printf("\n-> Informe o ID do aluno para buscar: ");
    scanf("%d", &busca);
    for (int i = 0; i < indice; i++){
        if (busca == a[i].id){
            printf("\n--> Nome: %s", a[i].nome);
            printf("--> Idade: %d\n", a[i].idade);
            printf("--> ID: %d\n\n", a[i].id);
            return;
        }
    } 
    printf("\nO ID informado nao existe na lista\n\n");
}

main(){
    Aluno a[MAX];
    int totalCadastros = 0, opcao;

    do{
        printf("Digite 1 para cadastrar");
        printf("\nDigite 2 para listar");
        printf("\nDigite 3 para buscar");
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
            buscar(a, totalCadastros);
            break;
        }
    } while (opcao != 0);
}