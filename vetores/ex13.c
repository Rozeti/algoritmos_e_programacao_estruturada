#include<stdio.h>

main(){
    int num[5], maior = 0, menor = 1000, posicaoM = 0, posicaoN = 0;

    for (int i = 0; i < 5; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
            posicaoM = i;
        }
        if (menor > num[i]){
            menor = num[i];
            posicaoN = i;
        }
    }

    printf("\n\n--> Valores do vetor: ");
    for (int i = 0; i < 5; i++){
        printf("\n-> Posicao: %d -> Valor: %d", i, num[i]);
    }

    printf("\n\n-> O maior valor do vetor eh: %d, na posicao: %d", maior, posicaoM);
    printf("\n-> O menor valor do vetor eh: %d, na posicao: %d", menor, posicaoN);
}