#include<stdio.h>

main(){
    int a[6] = {1, 0, 5, -2, -5, 7}, soma = 0;

    printf("a) Os valores iniciais do vetor A sao: ");

    for (int i = 0; i < 6; i++){
        printf("\n-> Posicao: %d, -> Valor: %d", i, a[i]);
        if (i == 0 || i == 5){
            soma += a[i];
        }else if (i == 4){
            a[i] = 100;
        }
    }

    printf("\n\nb) A soma dos valores das posicoes A[0] e A[5] do vetor eh igual a: %d", soma);
    printf("\n\nc) O novo valor da posicao A[4] no vetor eh: %d\n", a[4]);

    for (int i = 0; i < 6; i++){
        printf("\nd) Os novos valores do vetor A sao: A[%d] -> %d", i, a[i]);
    }
}
