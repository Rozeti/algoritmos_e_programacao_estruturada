#include<stdio.h>

main(){// EX de operadores relacionais

    float altura;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if (altura >= 1.80)
    {
        printf("Voce e maior ou igual que 1.80m");
    }
    else{
        printf("Voce e menor que 1.80m");
    }

}
