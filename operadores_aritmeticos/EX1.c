#include<stdio.h>
#include<math.h>

main(){

    int num1, num2, soma, sub, mult;
    float div;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\nDigite agora o segundo numero numero: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;

    printf("\n----------> Rsulatados <----------");
    printf("\nA soma e: %d; \nA subtracao e: %d; \nA multiplicao e: %d; \nA divisao e: %.2f", soma, sub, mult, div);

}
