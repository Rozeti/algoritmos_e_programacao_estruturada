#include<stdio.h>

main(){
    float num[15], soma = 0, media = 0;
    int contador = 1;

    for (int i = 0; i < 15; i++){
        printf("\n-> Informe a nota do aluno %d: ", contador);
        scanf("%f", &num[i]);
        contador++;
    }

    for (int i = 0; i < 15; i++){
        soma += num[i];
    }   

    media = soma / 15;
    printf("\n\n--> Media geral das notas eh: %.2f", media);
}