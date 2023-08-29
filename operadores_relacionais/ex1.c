#include<stdio.h>

main(){// EX de operadores relacionais

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18){
        printf("-> Voce e maior de idade");
    }
    else{
        printf("-> Voce e menor de idade");
    }

}
