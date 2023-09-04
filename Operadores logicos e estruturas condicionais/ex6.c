#include<stdio.h>

main(){

    int num;

    printf("Digite um numero qualquer que te direi se ele e par (caso nao seja par nao acontecera nada): ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("O numero que voce digitou e par e ele e: %d", num);
    }
}