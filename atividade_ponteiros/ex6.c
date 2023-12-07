#include <stdio.h>

int somaDoQuadrado(int *a, int *b){
    int soma;

    *a = *a * 2;
    *b = *b * 2;

    soma = *a + *b;

    return soma;
}

main(){
    int num1, num2, soma;

    printf("--> Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("--> Informe o segundo valor: ");
    scanf("%d", &num2);

    soma = somaDoQuadrado(&num1, &num2);

    printf("\n---> Resultado da soma dos quadrados dos numeros informados: %d", soma);
}