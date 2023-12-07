#include<stdio.h>

main(){
    int vetorA[10], vetorB[10], vetorC[10], contador1 = 0, contador2 = 0;

    printf("--> Digite os valores do vetor A: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorA[i]);
    }
    printf("\n\n--> Digite os valores do vetor B: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetorB[i]);
    }

    printf("\n\n--> Valores do vetor C: ");
    for (int i = 0; i < 10; i++){
        if (i % 2 == 0){
            vetorC[i] = vetorA[contador1];
            contador1++;
        }else if (i % 2 != 0){
            vetorC[i] = vetorB[contador2];
            contador2++;
        }
        printf("\n--> Posicao: %d - Valor: %d", i, vetorC[i]);
    }
}