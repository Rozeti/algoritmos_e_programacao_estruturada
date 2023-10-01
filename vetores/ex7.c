#include<stdio.h>

main(){
    int num[10], maior = 0, posicao = 0;

    for (int i = 0; i < 10; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
            posicao = i;
        }
    }

    printf("\n\n--> Vetor: ");
    for (int i = 0; i < 10; i++)
    {
        printf("\n-> Posicao %d -> valor: %d", i, num[i]);
    }
    
    printf("\n\n-> O maior numero que voce digitou foi: %d, e ele esta localizado na posicao: %d", maior, posicao);
}