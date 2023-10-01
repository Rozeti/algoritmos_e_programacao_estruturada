#include<stdio.h>

main(){
    int num[10], par = 0;

    for (int i = 0; i < 10; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0){
            par ++;
        }
    }
    printf("\n\n-> A quantidade de numeros pares digitados foram: %d", par);
}