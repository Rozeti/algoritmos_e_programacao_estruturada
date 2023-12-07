#include <stdio.h>

main() {
    int vetor1[10];
    int vetor2[10];

    printf("--> Digite 10 numeros entre 0 a 50:\n");
    for (int i = 0; i < 10; i++) {
        do {
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] <= 0 || vetor1[i] > 50);
    }

    int contadorVetor2 = 0;
    for (int i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[contadorVetor2] = vetor1[i];
            contadorVetor2++;
        }
    }

    printf("\n--> Numeros do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\n--> Numeros impares digitados:\n");
    for (int i = 0; i < contadorVetor2; i++) {
        printf("%d ", vetor2[i]);
    }
}