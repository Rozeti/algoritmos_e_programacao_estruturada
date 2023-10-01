#include<stdio.h>

main(){
    int num[6];

    for (int i = 0; i < 6; i++){
        printf("\n-> Digite qualquer numero par: ");
        scanf("%d", &num[i]);
    }

    printf("\n\n--> Valores do vetor na ordem inversa: ");
    for (int i = 5; i >= 0; i--){
        printf("\n-> Posicao: %d -> Valor: %d", i, num[i]);
    }   
}