#include<stdio.h>

main(){

    int num1, num2, num3, maior, menor, medio;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    if (num1 > (num2, num3) && num2 < (num1, num3))
    {
        maior = num1;
        medio = num3;
        menor = num2;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    else if (num1 > (num2, num3) && num3 < (num2, num1))
    {
        maior = num1;
        medio = num2;
        menor = num3;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    else if (num2 > (num1, num3) && num1 < (num2, num3))
    {
        maior = num2;
        medio = num3;
        menor = num1;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    else if (num2 > (num1, num3) && num3 < (num1, num2))
    {
        maior = num2;
        medio = num1;
        menor = num3;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    else if (num3 > (num1, num2) && num1 < (num2, num3))
    {
        maior = num3;
        medio = num2;
        menor = num1;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    else if (num3 > (num1, num2) && num2 < (num1, num3))
    {
        maior = num3;
        medio = num1;
        menor = num2;

        printf("Digite o primeiro numero: %d, %d, %d", menor, medio, maior);
    }
    
    
    
}