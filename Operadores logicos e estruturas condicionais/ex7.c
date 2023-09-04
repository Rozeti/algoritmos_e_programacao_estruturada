#include<stdio.h>

main(){

    float nota1, nota2, nota3, media;

    printf("Digite a sua nota na primeira prova: ");
    scanf("%f", &nota1 );
    printf("Digite a sua nota na segunda prova: ");
    scanf("%f", &nota2 );
    printf("Digite a sua nota na terceira prova: ");
    scanf("%f", &nota3 );

    media = (nota1 + nota2 + nota3 + nota3) / 4;

    if (media >= 7.00){
        printf("Parabens, voce esta aprovado com media igual a: %.2f", media);
    }
    else if (media < 7.00){
        printf("Voce esta reprovado com media igual a: %.2f", media);
    }
}