#include<stdio.h>

main(){

    int num;

    printf("Digite um numero qualquer, que mostrarei se ele e igual a 5, a 200, a 400, se esta entre 500 a 1000, ou se ele esta fora dos escopos anteriores: ");
    scanf("%d", &num);

    if (num == 5 || num == 200 || num == 400){
        printf("O numero que voce digitou foi: %d", num);
    }
    else if (num >= 500 && num <= 1000){
        printf("O numero que voce digitou esta entre 500 e 1000 sendo ele igual a: %d", num);
    }
    else{
        printf("O numero que voce digitou esta fora de todos os escopos anteriores!");
    }
}