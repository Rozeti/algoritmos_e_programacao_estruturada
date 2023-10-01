#include<stdio.h>

main(){
    int num[5], maior = 0, menor = 1000;
    float media = 0;

    for (int i = 0; i < 5; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
        }
        if (menor > num[i]){
            menor = num[i];
        }
        media += num[i];
    }

    printf("\n\n--> Valores do vetor: ");
    for (int i = 0; i < 5; i++){
        printf("\n-> Posicao: %d -> Valor: %d", i, num[i]);
    }
    media = media / 5;
    printf("\n\n-> O maior valor do vetor eh: %d", maior);
    printf("\n-> O menor valor do vetor eh: %d", menor);
    printf("\n-> A media dos valores do vetor eh: %.2f", media);
}