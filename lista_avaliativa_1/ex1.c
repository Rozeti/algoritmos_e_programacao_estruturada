#include<stdio.h>

main(){
    float num, funcao;

    printf("-> Digite o um valor para 'X', para encontrarmos o valor da funcao f(x): ");
    scanf("%f", &num);
    funcao = (5 * num + 3) / (num - 4);
    printf("-> O resultado para a f(x) eh igual a: %.2f", funcao);
}
