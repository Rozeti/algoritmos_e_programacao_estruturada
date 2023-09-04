#include<stdio.h>
#include<math.h>

main(){

    float num, resultado;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num >= 0){
        resultado = sqrt(num);
        printf("A raiz do numero que voce digitou eh: %.3f", resultado);
    }
    else{
        resultado = pow(num, 2);
        printf("O quadrado do numero que voce digitou eh: %.3f", resultado);
    }
}
