#include<stdio.h>

main(){
    int vetor[10];

    printf("Os valores negativos serao substituidos por 0\n");
    for (int i = 0; i < 10; i++){
        printf("--> Digite os numeros: ");
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0){
            vetor[i] = 0;
        }
    }
    for (int i = 0; i < 10; i++){
        printf("\n--> Posicao: %d - Valor: %d", i, vetor[i]);
    }
}