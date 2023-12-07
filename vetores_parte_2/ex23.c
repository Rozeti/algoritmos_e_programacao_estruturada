#include <stdio.h>

main() {
    float vetorX[5], vetorY[5];

    printf("Digite os elementos do primeiro conjunto (vetorX):\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetorX[i]);
    }

    printf("\nDigite os elementos do segundo conjunto (vetorY):\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetorY[i]);
    }

    float produtoEscalar = 0;
    for (int i = 0; i < 5; i++) {
        produtoEscalar += vetorX[i] * vetorY[i];
    }

    printf("\nConjunto X: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorX[i]);
    }

    printf("\nConjunto Y: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vetorY[i]);
    }

    printf("\n\nProduto Escalar: %.2f\n", produtoEscalar);
}