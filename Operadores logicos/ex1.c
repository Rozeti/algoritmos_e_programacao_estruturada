#include<stdio.h>
#include<math.h>

main(){

    int num, quadrado, raiz;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0 && num % 2 == 0)
    {
        raiz = sqrt(num);
        printf("A raiz quadrada do numero que voce digitou e: %d", raiz);
    }
    else{
        quadrado = num * num;
        printf("O quadrado do numero que voce digitou e: %d", quadrado);
    } 
}