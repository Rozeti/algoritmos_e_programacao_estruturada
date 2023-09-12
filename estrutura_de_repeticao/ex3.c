#include<stdio.h>

main(){
    int num, contador1, contador2;

    printf("Digite qualquer numero: ");
    scanf("%d", &num);

    contador1 = contador2 = num;

    while (num % 2 == 0){
        printf("\n-> Impares: %d", contador1);
        contador1 -= 3; 
    }
}