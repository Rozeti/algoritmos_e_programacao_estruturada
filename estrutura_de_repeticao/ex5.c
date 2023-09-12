#include<stdio.h>

main(){
    int num, soma = 0;

    for (num = 2; num <= 100; num += 2){
        soma += num;
    }
    printf("\n-> A soma eh: %d", soma);   
}