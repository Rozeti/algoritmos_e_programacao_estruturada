#include<stdio.h>

main(){
    int vetor[50];

    for (int i = 0; i < 50; i++){
        vetor[i] = (i + 5 * i) % (i + 1);
        printf("\n->Posicao: %d - Valor: %d", i, vetor[i]);
    }
}