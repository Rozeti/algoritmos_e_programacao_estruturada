#include<stdio.h>

main(){
int vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("--> Informe cinco valor quaisquer: ");
        scanf("%d", &vetor[i]);
    }

    int *ponteiro = vetor;

    printf("\n--> O dobro de cada valor informado eh: ");

    for (int i = 0; i < 5; i++) {  
        printf("%d, ", (*ponteiro) * 2);
        ponteiro++;
    }
}