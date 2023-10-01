#include<stdio.h>

main(){
    int num[10], maior = 0, menor = 1000;

    for (int i = 0; i < 10; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (maior < num[i]){
            maior = num[i];
        }
        if (menor > num[i]){
            menor = num[i];
        }
    }
    printf("\n\n-> O maior numero que voce digitou foi: %d, e o menor: %d", maior, menor);
}