#include <stdio.h>
#include <math.h>

float calc_raio(int altura, int raio) {
    return (float) 3.14 * pow(raio, 2) * altura;
}

int main() {
    printf("%.2f", calc_raio(10, 2));
    return 0;
}
