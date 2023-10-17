#include<stdio.h>

float imc(float altura, float peso){
    float imc = peso / (altura * altura);
    return imc;
}

main(){
    float altura, peso;

    printf("-> Digite sua altura: ");
    scanf("%f", &altura);
    printf("-> Digite seu peso em kilos: ");
    scanf("%f", &peso);

    float retornoIMC = imc(altura, peso);
    printf("\n\n--> O seu IMC eh: %.2f", retornoIMC);
}
