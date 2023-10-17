#include <stdio.h>
#include <math.h>

float vol_esfera(float raio) {
    float volume = (4 / 3) * 3.1415 * pow(raio, 3);
    return volume;
}

main() {
    float raio;

    printf("--> Digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    float retornoVol = vol_esfera(raio);
    printf("\n--> O valor do volume da esfera eh: %.2f", retornoVol);
}
