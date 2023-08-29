#include<stdio.h>

main(){// EX de operadores relacionais

    float salario;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);

    if (salario >= 1320)
    {
        printf("Seu salario e maior ou igual ao minimo!");
    }
    else{
        printf("Voce ganha menos que o salario minimo atual");
    }

}
