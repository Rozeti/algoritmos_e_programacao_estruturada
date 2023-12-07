#include <stdio.h>

/* Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal. */
void soma(int *numA, int *numB){
    *numA = *numA + *numB;
    printf("\n\n----> Numeros depois da funcao <---- \n---> Primeiro (soma dos numeros informados): %d \n---> Segundo (permaneceu o mesmo): %d\n\n", *numA, *numB);
}

main(){
    int numA, numB;

    printf("--> Informe o primeiro valor: ");
    scanf("%d", &numA);

    printf("--> Informe o primeiro valor: ");
    scanf("%d", &numB);

    printf("\n\n----> Numeros informados <---- \n---> Primeiro: %d \n---> Segundo: %d", numA, numB);

    soma(&numA, &numB);
}