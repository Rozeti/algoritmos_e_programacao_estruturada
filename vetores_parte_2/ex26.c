#include <stdio.h>
#include <math.h>

main() {
    int n = 10;
    float vetor[n];
    float media = 0, soma = 0, desvioPadrao = 0;

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / n;

    for (int i = 0; i < n; i++) {
        desvioPadrao += pow(vetor[i] - media, 2);
    }

    desvioPadrao = sqrt(desvioPadrao / n);

    printf("\nMédia: %.2f\n", media);
    printf("Desvio Padrão: %.2f\n", desvioPadrao);

}
