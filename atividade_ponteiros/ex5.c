#include <stdio.h>

void maiorEmenor(int *a, int *b){
    if (*a > *b){
        printf("\n\n---> O maior valor: %d \n--> O menor valor: %d", *a, *b);
    }
    else{
        printf("\n\n---> O maior valor: %d \n--> O menor valor: %d", *b, *a);
    }
}

main(){
    int num1, num2;

    printf("--> Informe o primeiro valor: ");
    scanf("%d", &num1);

    printf("--> Informe o segundo valor: ");
    scanf("%d", &num2);

    maiorEmenor(&num1, &num2);
}