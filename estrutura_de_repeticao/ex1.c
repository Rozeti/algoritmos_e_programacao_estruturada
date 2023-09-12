#include<stdio.h>

main(){
    int num, crescente = 0;

    printf("Digite qualquer numero: ");
    scanf("%d", &num);

    while (crescente <= num){
        printf("\n-> %d", crescente);
        crescente++;
    }
}