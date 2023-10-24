#include <stdio.h>
#include <math.h>

float calc_raio(double altura, double raio) {
    double PI = 3.1415;
    double volume = PI * pow(raio, 2) * altura;
    return volume;
}

int main() {
    double altura = 2, raio = 1;
    double volume = calc_raio(altura, raio);
    printf("Volume do cilindro: %lf", volume);
}
