#include<stdio.h>

main(){// EX de operadores relacionais

// Dizer se o aluno esta aprovado, reprovado ou de recuperação de acordo com a média final dele, sem usar operadores lógicos

    float media;

    printf("Digite sua media final: ");
    scanf("%f", &media);

    if (media >= 7.00){
        printf("Voce esta aprovado");
    }else if (media < 4){
        printf("Voce esta reprovado");
    }else{
        printf("Voce esta de recuperacao");
    }
    
    
}