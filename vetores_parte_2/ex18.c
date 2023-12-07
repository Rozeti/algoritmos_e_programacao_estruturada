#include<stdio.h>

main(){
    int vetor[10], opcao = 0, multiplos[11];

    printf("Digite 10 numeros para preencher o vetor: \n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\n\nEscolha um numero do vetor para mostrar seus multiplos: ");
    for (int i = 0; i < 10; i++){
        printf("\n--> Numero: %d", vetor[i]);
    }
    printf("\n---> ");
    scanf("%d", &opcao);

    for (int i = 0; i < 10; i++){
        if (vetor[i] == opcao){
            printf("\n\n--> Os multiplos de %d sao:", opcao);
            for (int j = 0; j < 11; j++){
                multiplos[j] = opcao * j;
                printf("\n-> %d * %d = %d", opcao, j, multiplos[j]);
            } 
        }
    }
}