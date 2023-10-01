#include <stdio.h>

int main() {
    int num_pessoas = 10;
    int num_homens = 0, num_mulheres = 0;
    float altura_homem = 0, altura_mulher = 0, altura_total = 0;
    float peso_homem = 0, peso_mulher = 0, peso_total = 0;
    float altura_media_homem = 0, altura_media_mulher = 0, altura_media_grupo = 0;
    float peso_media_homem = 0, peso_media_mulher = 0, peso_media_grupo = 0;

    for (int i = 0; i < num_pessoas; i++) {
        char nome[50], sexo;
        float altura, peso;

        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nome);

        printf("Digite o sexo da pessoa %d (M/F): ", i + 1);
        scanf(" %c", &sexo);

        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &altura);

        printf("Digite o peso da pessoa %d (em kg): ", i + 1);
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            altura_homem += altura;
            peso_homem += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            altura_mulher += altura;
            peso_mulher += peso;
        } else {
            printf("Sexo invalido para a pessoa %d. Use M ou F.\n", i + 1);
            i--;  
        }
        altura_total += altura;
        peso_total += peso;
    }

    if (num_homens > 0) {
        altura_media_homem = altura_homem / num_homens;
        peso_media_homem = peso_homem / num_homens;
    }

    if (num_mulheres > 0) {
        altura_media_mulher = altura_mulher / num_mulheres;
        peso_media_mulher = peso_mulher / num_mulheres;
    }

    if (num_pessoas > 0) {
        altura_media_grupo = altura_total / num_pessoas;
        peso_media_grupo = peso_total / num_pessoas;
    }

    printf("Numero de homens: %d\n", num_homens);
    printf("Numero de mulheres: %d\n", num_mulheres);
    printf("Altura media dos homens: %.2f metros\n", altura_media_homem);
    printf("Altura media das mulheres: %.2f metros\n", altura_media_mulher);
    printf("Altura media do grupo: %.2f metros\n", altura_media_grupo);
    printf("Peso medio dos homens: %.2f kg\n", peso_media_homem);
    printf("Peso medio das mulheres: %.2f kg\n", peso_media_mulher);
    printf("Peso medio do grupo: %.2f kg\n", peso_media_grupo);
}