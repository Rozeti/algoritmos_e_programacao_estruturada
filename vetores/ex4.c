#include<stdio.h>

main(){
    int num[8], soma = 0;

    for (int i = 0; i < 8; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (i == 3 || i == 6){
            soma += num[i];
        }
    }
    printf("\n\n-> A soma dos valores das posicoes X e Y do vetor eh igual a: %d", soma);
}