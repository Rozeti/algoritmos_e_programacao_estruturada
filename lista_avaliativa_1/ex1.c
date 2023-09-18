#include<stdio.h>
#include<math.h>

main(){
    int num, funcao;

    printf("-> Digite o um valor para 'X', para encontrarmos o valor da funcao f(x): ");
    scanf("%d", &num);

    funcao = (5 * num + 3) / (num - 4);

    printf("-> O resultado para a f(x) eh igual a: %d", funcao);
}