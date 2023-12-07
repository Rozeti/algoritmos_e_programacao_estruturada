#include <stdio.h>

main(){
    float vetor[10];
    float *ponteiro;

    for (int i = 0; i < 10; i++){
        vetor[i] = i * 1.7;
    }
    
    for (int i = 0; i < 10; i++){
        ponteiro = &vetor[i];
        printf("\n\n--> Posicao: %d - Endereco: %.2f\n\n", i, ponteiro);
    }
}