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
    fgets(u[totalCadastros].nome, sizeof(u[totalCadastros].nome), stdin);
    fflush(stdin);

    printf("--> Email: ");
    fgets(u[totalCadastros].email, sizeof(u[totalCadastros].email), stdin);
    fflush(stdin);
    if (strchr(u[totalCadastros].email, '@') == NULL){
        do{
            printf("\n-> Email invalido. Por favor informe um endereco de email valido: ");
            fgets(u[totalCadastros].email, sizeof(u[totalCadastros].email), stdin);
            fflush(stdin);
        } while (strchr(u[totalCadastros].email, '@') == NULL);
    }
    
    printf("--> Sexo (Femenino / Masculino / Indiferente): ");
    fgets(u[totalCadastros].sexo, sizeof(u[totalCadastros].sexo), stdin);
    fflush(stdin);

    printf("--> Endereco: ");
    fgets(u[totalCadastros].endereco, sizeof(u[totalCadastros].endereco), stdin);
    fflush(stdin);

    printf("--> Altura: ");
    scanf("%lf", &u[totalCadastros].altura);
    fflush(stdin);

    printf("--> Vacinado (1 - para sim ou 0 - para nao): ");
    scanf("%d", &u[totalCadastros].vacina);
    fflush(stdin);

    printf("\n-> Cadastro realizado com sucesso!");
}



void buscarUsuario(Usuario u[], int totalCadastrados, int menuOpcao){
    char busca[30];
    int contador = 0;
    
    if (totalCadastrados == 0)
    {
        printf("\n\nOpa, nao tem nenhum registro na lista ainda!!");
        return;
    }else{
        printf("\n-> Informe o email a ser buscado: ");
        fgets(busca, sizeof(busca), stdin);
        fflush(stdin);
        for (int i = 0; i < totalCadastrados; i++){
            if (strcmp(busca, u[i].email) == 0){
                printf("\n\n-----> ENCONTRADO: <-----");
                printf("\n-> Nome de usuario: %s", u[i].nome);
                printf("-> ID de usuario: %d", u[i].id);
                printf("\n-> Email: %s", u[i].email);
                printf("-> Sexo: %s", u[i].sexo);
                printf("-> Endereco: %s", u[i].endereco);
                printf("-> Altura: %lf", u[i].altura);
                printf("\n-> Vacinado (1 - sim / 0 - nao): %d", u[i].vacina);
                contador = i;
            } 
        }
        if (menuOpcao == 2){
            editarUsuario(u, totalCadastrados, contador);
            return;
        }else if (menuOpcao == 3){
            excluirUsuario(u, totalCadastrados, contador);
            return;
        }
    }
    printf("\n\n# Email nao encontrado!");
    fflush(stdin); 
}

void editarUsuario(Usuario u[], int totalCadastros, int contador){
    int edicao;

    printf("\n\n-----> EDICAO DE USUARIO <-----");
    printf("\n-> 1 - Nome");
    printf("\n-> 2 - Email");
    printf("\n-> 3 - Sexo");
    printf("\n-> 4 - Endereco ");
    printf("\n-> 5 - Altura ");
    printf("\n-> 6 - Vacina");
    printf("\n-> 0 - Para desistir");
    printf("\n\n--> Qual a sua opcao: ");
    scanf("%d", &edicao);

    switch (edicao)
    {
    case 1:
        fflush(stdin);
        printf("\n\n-> Opcao 1 - Nome");
        printf("\n-> Qual sera o novo Nome: ");
        fgets(u[contador].nome, sizeof(u[contador].nome), stdin);
        fflush(stdin);
        printf("\nItem alterado com sucesso!!");
        break;
    case 2:
        fflush(stdin);
        printf("\n\n-> Opcao 2 - Email");
        printf("\n-> Qual sera o novo Email: ");
        fgets(u[contador].email, sizeof(u[contador].email), stdin);
        fflush(stdin);
        if (strchr(u[contador].email, '@') == NULL){
            do{
                printf("\n-> Email invalido. Por favor informe um endereco de email valido: ");
                fgets(u[contador].email, sizeof(u[contador].email), stdin);
                fflush(stdin);
            } while (strchr(u[contador].email, '@') == NULL);
        }
        printf("\nItem alterado com sucesso!!");
        break;
    case 3:
        fflush(stdin);
        printf("\n\n-> Opcao 3 - Sexo");
        printf("\n-> Qual sera o novo Sexo: ");
        fgets(u[contador].sexo, sizeof(u[contador].sexo), stdin);
        fflush(stdin);
        printf("\nItem alterado com sucesso!!");
        break;
    case 4:
        fflush(stdin);
        printf("\n\n-> Opcao 4 - Endereco");
        printf("\n-> Qual sera o novo Endereco: ");
        fgets(u[contador].endereco, sizeof(u[contador].endereco), stdin);
        fflush(stdin);
        printf("\nItem alterado com sucesso!!");
        break;
    case 5:
        fflush(stdin);
        printf("\n\n-> Opcao 5 - Altura");
        printf("\n-> Qual sera a nova Altura: ");
        scanf("%lf", &u[contador].altura);
        fflush(stdin);
        printf("\nItem alterado com sucesso!!");
        break;
    case 6:
        fflush(stdin);
        printf("\n\n-> Opcao 6 - Vacina");
        printf("\n-> Qual sera o novo status da vacina: ");
        scanf("%d", &u[contador].vacina);
        fflush(stdin);
        printf("\nItem alterado com sucesso!!");
        break;
    case 0:
        return;
        break;
    default:
        break;
    }
}

void excluirUsuario(Usuario u[], int totalCadastros, int contador){

    for (int i = contador; i < totalCadastros; i++){
        u[i] = u[i + 1];
    }
    printf("\n\nItem excluido com sucesso!");
}
    
void listarUsuarios(Usuario u[], int totalCadastros){
    if (totalCadastros == 0){
        printf("\n\nAinda nao a nenhum registro para ser listado");
    }else{
        printf("\n\n-----> LISTA DE USUARIOS <-----");
        for (int i = 0; i < totalCadastros; i++){
            printf("\n-> Nome de usuario: %s", u[i].nome);
            printf("-> ID de usuario: %d", u[i].id);
            printf("\n-> Email: %s", u[i].email);
            printf("-> Sexo: %s", u[i].sexo);
            printf("-> Endereco: %s", u[i].endereco);
            printf("-> Altura: %lf", u[i].altura);
            printf("\n-> Vacinado (1 - sim / 0 - nao): %d\n", u[i].vacina);
        }
    }  
}

/*
void gerarID(){
    int i;
    srand(time(NULL));
    i = rand() % 10000;
}
*/
main (){
    Usuario u[TAM];
    int menuOpcao, totalCadastrados = 0, opcao;

    do{
        printf("\n\n-> Digite 1 - Para incluir novo usuario");
        printf("\n-> Digite 2 - Para editar usuario");
        printf("\n-> Digite 3 - Para excluir usuario");
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
            fflush(stdin);
            buscarUsuario(u, totalCadastrados, menuOpcao);
            break;
        case 3:
            fflush(stdin);
            printf("\n\n-----> EXCLUIR USUARIO <-----");
            printf("\n-> Deseja mesmo excluir a conta? 1 - Para sim ou 0 - Para nao: ");
            scanf("%d", &opcao);
            if (opcao == 1){
                buscarUsuario(u, totalCadastrados, menuOpcao);
                totalCadastrados--;
            } else{
                printf("\n\n-> Exclusao interrompida!");
            }
            break;
        case 4:
            fflush(stdin);
            buscarUsuario(u, totalCadastrados, menuOpcao);
            break;
        case 5:
            fflush(stdin);
            listarUsuarios(u, totalCadastrados);
            break;
        
        default:
            break;
        }
    } while (menuOpcao != 0);
}