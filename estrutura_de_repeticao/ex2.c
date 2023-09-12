#include<stdio.h>

main(){
    int num, decrescente;

    printf("Digite qualquer numero: ");
    scanf("%d", &num);

    decrescente = num;

    while (decrescente <= num && decrescente >= 0){
        printf("\n-> %d", decrescente);
        decrescente --;
    }

   /*while (num <= num){
        if (num >= 0){
           printf("\n-> %d", num);
           num --; 
        }
        else{
            break;
        }
   }*/  
}