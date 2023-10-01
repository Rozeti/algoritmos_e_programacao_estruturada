#include<stdio.h>

main(){
    float num[10], quadrado[10];

    for (int i = 0; i < 10; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%f", &num[i]);
    }
    for (int i = 0; i < 10; i++){
        quadrado[i] = num[i] * num[i];
        printf("\n-> O quadrado dos numeros digitados sao: %.2f", quadrado[i]);
    }
}