#include<stdio.h>

main(){
    int vetorA[10], vetorB[10], vetorC[10];

    printf("--> Digite os valores do vetor A: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }
    printf("\n\n--> Digite os valores do vetor B: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorB[i]);
    }

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (vetorA[i] != vetorB[j]){
                vetorC[i] = vetorA[i];
            }else if (vetorA[i] == vetorB[j]){
                vetorC[i] = 0;
            } 
        }
    }
    printf("\n\n--->Valores do Vetor C (C = A-B): ");
    for (int i = 0;  i < 10; i++){
        printf("\n->Posicao: %d - Valor: %d", i, vetorC[i]);
    }
}