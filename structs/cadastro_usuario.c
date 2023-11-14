#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>
#define TAM 3

typedef struct{
    char nome[30], email[30], sexo[10], endereco[50];
    double altura;
    int vacina, id;
}Usuario;

void cadastroUsuario(Usuario u[], int totalCadastros){
    srand(time(NULL));
    u[totalCadastros].id = rand() % 10000;

    fflush(stdin);
    printf("\n\n-----> CADASTRO DE USUARIO <-----");
    printf("\n--> Nome: ");
    fgets(u[totalCadastros].nome, sizeof(TAM), stdin);
    fflush(stdin);
    printf("--> Email: ");
    fgets(u[totalCadastros].email, sizeof(TAM), stdin);
    fflush(stdin);
    printf("--> Sexo (Femenino / Masculino / Indiferente): ");
    fgets(u[totalCadastros].sexo, sizeof(TAM), stdin);
    fflush(stdin);
    printf("--> Endereco: ");
    fgets(u[totalCadastros].endereco, sizeof(TAM), stdin);
    fflush(stdin);
    printf("--> Altura: ");
    scanf("%lf", &u[totalCadastros].altura);
    fflush(stdin);
    printf("--> Vacinado (1 - para sim ou 0 - para nao): ");
    scanf("%d", &u[totalCadastros].vacina);
    fflush(stdin);
    printf("\n-> Cadastro realizado com sucesso!");
}

void buscarUsuario(Usuario u[], char busca[]){
    int opcao, busca;
    
        do{
            fflush(stdin);
            printf("\n\n-----> BUSCA DE USUARIO <-----");
            printf("\n-> Informe o email a ser buscado: ");
            fgets(busca, sizeof(busca), stdin);
            fflush(stdin);

            for (int i = 0; i < TAM; i++){
                if (busca == u[i].email){
                    printf("\n-> Nome de usuario: %s", u[i].nome);
                    printf("\n-> Email: %s", u[i].email);
                    printf("\n-> Sexo: %s", u[i].sexo);
                    printf("\n-> Endereco: %s", u[i].endereco);
                    printf("\n-> Altura: %lf", u[i].altura);
                    printf("\n-> Vacinado (1 - sim / 0 - nao): %d", u[i].vacina);
                    return;
                } 
            }
            printf("\n\n# Email nao encontrado deseja tentar novamente? (1 - para sim ou 2 - para nao): ");
            scanf("%d", &opcao);
            fflush(stdin);
        } while (opcao == 1);  
}

void editarUsuario(Usuario u[]){}

/*
void gerarID(){
    int i;
    srand(time(NULL));
    i = rand() % 10000;
}
*/

main (){
    Usuario u[TAM];
    int menuOpcao, totalCadastrados = 0;
    char busca[30];

    do{
        printf("\n\n-> Digite 1 - Para incluir novo usuario");
        printf("\n-> Digite 2 - Para editar usuario");
        printf("\n-> Digite 4 - Para buscar por usuario");
        printf("\n-> Digite 5 - Imprimir lista de usuarios cadastrados");
        printf("\n-> Digite 0 - Para sair do sistema");

        printf("\n\n--> Qual a sua escolha: ");
        scanf("%d", &menuOpcao);

        switch (menuOpcao){
        case 1:
            if (totalCadastrados < TAM){
                cadastroUsuario(u, totalCadastrados);
                totalCadastrados++;
            }else {
                printf("\n\n## Maximo de cadastros atigindo! ##");
            }
            break;
        case 2:
            editarUsuario(u);
            break;
        case 4:
            fflush(stdin);
            printf("\n-> Informe o email a ser buscado: ");
            fgets(busca, sizeof(busca), stdin);
            fflush(stdin);
            buscarUsuario(u, busca);
            break;
        
        default:
            break;
        }
    } while (menuOpcao != 0);
    
}