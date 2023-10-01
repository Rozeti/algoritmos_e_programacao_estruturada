#include<stdio.h>

main(){
    float num[10], negativo = 0, positivo = 0;

    for (int i = 0; i < 10; i++){
        printf("\n-> Digite qualquer numero do conjunto dos reais: ");
        scanf("%f", &num[i]);

        if (num[i] < 0){
            negativo++;
        }else {
            positivo += num[i];
        }
    }
    printf("\n\n--> A quantidade de numeros negativos digitados eh igual a: %.0f", negativo); 
    printf("\n--> A soma de todos os numeros positivos eh igual a: %.2f", positivo);
}