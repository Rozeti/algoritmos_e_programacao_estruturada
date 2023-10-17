#include<stdio.h>

float temperatura(float temp){
    float celsius = (temp - 32.f) * (5.f / 9.f);
    return celsius;
}

main(){
    float fahren;
    
    printf("-> Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &fahren);
    while (fahren < -459 || fahren > 212){
        printf("\n#Valor Invalido. Pf digite uma temperatura entre -459 a 212 graus Fahrenheit: ");
        scanf("%f", &fahren);
    }
    
    printf("\n");
    float retornoFuncao = temperatura(fahren);
    printf("-> O valor da temperatura em graus Celsius eh: %.2f C", retornoFuncao);
}
