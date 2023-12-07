#include <stdio.h>

int main() {
    int vetor[10], vetor1[10], vetor2[10];

    printf("--> Informe 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("-> Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int countador1 = 0, countador2 = 0;

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            vetor1[countador1] = vetor[i];
            countador1++;
        } else {
            vetor2[countador2] = vetor[i];
            countador2++;
        }
    }

    printf("\n--> Elementos impares do vetor:\n");
    for (int i = 0; i < countador1; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\n--> Elementos pares do vetor:\n");
    for (int i = 0; i < countador2; i++) {
        printf("%d ", vetor2[i]);
    }
}