#include<stdio.h>

main(){

    int ddd;

    printf("Digite o DDD do seu numero de telefone: ");
    scanf("%d", &ddd);

    switch (ddd){
    case 11:
        printf("Seu numero pertence a Sao Paulo");
        break;
    case 19:
        printf("Seu numero pertence a Campinas");
        break;
    case 21:
        printf("Seu numero pertence ao Rio de Janeiro");
        break;
    case 27:
        printf("Seu numero pertence a Vitoria");
        break;
    case 31:
        printf("Seu numero pertence a Belo Horizonte");
        break;
    case 32:
        printf("Seu numero pertence a Juiz de Fora");
        break;
    case 61:
        printf("Seu numero pertence a Brasilia");
        break;
    case 71:
        printf("Seu numero pertence a Salvador");
        break;
    
    default:
        printf("O DDD que voce informou nao identifica nenhuma cidade");
        break;
    }
}