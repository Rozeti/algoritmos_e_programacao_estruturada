#include<stdio.h>

float maior(float n1, float n2){
    if (n1 > n2){
        return n1;
    }else{
        return n2;
    }    
}

main(){
    float numero1, numero2;

    printf("\n--> Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("\n--> Digite o segundo numero: ");
    scanf("%f", &numero2);

    float retornoMaior = maior(numero1, numero2);

    printf("\n--> O maior numero eh: %.2f", retornoMaior);
}
