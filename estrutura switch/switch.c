#include<stdio.h>

main(){

    int dia;

    printf("Digite um numero correspondente ao dia da semana: ");
    scanf("%d", &dia);

    // estrutura switch case
    switch(dia){
        case 1: 
            printf("\nDomingo");
            break;
        case 2: 
            printf("\nSegunda");
            break;
        case 3: 
            printf("\nTerca");
            break;
        case 4: 
            printf("\nQuarta");
            break;
        case 5: 
            printf("\nQuinta");
            break;
        case 6: 
            printf("\nSexta");
            break;
        case 7: 
            printf("\nSabado");
            break;
        default:
            printf("\nOnumero nao corresponde a nenhum dia da semana!");
    }
}