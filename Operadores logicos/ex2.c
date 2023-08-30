#include<stdio.h>

main(){

    int num1, num2, num3, num4, maior, menor;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);
    printf("Digite o quarto numero: \n");
    scanf("%d", &num4);

    if (num1 > (num2, num3, num4) && num2 < ( num1, num3, num4))
    {
        maior = num1;
        menor = num2;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num1 > (num2, num3, num4) && num3 < ( num1, num2, num4))
    {
        maior = num1;
        menor = num3;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num1 > (num2, num3, num4) && num4 < ( num1, num2, num3))
    {
        maior = num1;
        menor = num4;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num2 > (num1, num3, num4) && num1 < ( num2, num3, num4))
    {
        maior = num2;
        menor = num1;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num2 > (num1, num3, num4) && num3 < ( num1, num2, num4))
    {
        maior = num2;
        menor = num3;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num2 > (num1, num3, num4) && num4 < ( num1, num2, num3))
    {
        maior = num2;
        menor = num4;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num3 > (num1, num2, num4) && num1 < ( num2, num3, num4))
    {
        maior = num3;
        menor = num1;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num3 > (num1, num2, num4) && num2 < ( num1, num3, num4))
    {
        maior = num3;
        menor = num2;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num3 > (num1, num2, num4) && num4 < ( num1, num2, num3))
    {
        maior = num3;
        menor = num4;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num4 > (num1, num2, num3) && num1 < ( num2, num3, num4))
    {
        maior = num4;
        menor = num1;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num4 > (num1, num2, num3) && num2 < ( num1, num3, num4))
    {
        maior = num4;
        menor = num2;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
    else if (num4 > (num1, num2, num3) && num3 < ( num1, num2, num4))
    {
        maior = num4;
        menor = num3;

        printf("-> O maior numero que voce digitou foi: %d", maior);
        printf("\n-> O menor numero que voce digitou foi: %d", menor);
    }
}