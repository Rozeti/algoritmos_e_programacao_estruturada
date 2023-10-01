#include <stdio.h>
#include <string.h>

int main() {
    int num_entrevistados = 0;
    int votos[5] = {0};
    char jogadoras[5][50] = {
        "Sam Kerr",
        "Alex Morgan",
        "Dzsenifer Marozsan",
        "Amandine Henry",
        "Marta Vieira"
    };

    int num_mulheres = 0;
    int num_maiores_idade = 0;

    while (num_entrevistados < 300) {
        char nome[50];
        int idade;
        char sexo;
        char voto;

        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
        }

        if (idade >= 18) {
            num_maiores_idade++;
        }

        if (idade > 12) {
            printf("Digite o voto (S/A/D/M/H): ");
            scanf(" %c", &voto);

            switch (voto) {
                case 'S':
                case 's':
                    votos[0]++;
                    break;
                case 'A':
                case 'a':
                    votos[1]++;
                    break;
                case 'D':
                case 'd':
                    votos[2]++;
                    break;
                case 'M':
                case 'm':
                    votos[3]++;
                    break;
                case 'H':
                case 'h':
                    votos[4]++;
                    break;
                default:
                    printf("Voto inválido!\n");
                    continue;  
            }

            num_entrevistados++;
        } else {
            printf("A idade deve ser maior ou igual a 13 anos para votar.\n");
        }
    }

    int max_votos = votos[0];
    for (int i = 1; i < 5; i++) {
        if (votos[i] > max_votos) {
            max_votos = votos[i];
        }
    }

    printf("Jogadoras mais votadas:\n");
    for (int i = 0; i < 5; i++) {
        if (votos[i] == max_votos) {
            printf("%s\n", jogadoras[i]);
        }
    }

    printf("\nRelatório de entrevistados:\n");

    printf("Mulheres entrevistadas: %d\n", num_mulheres);
    printf("Pessoas maiores de idade entrevistadas: %d\n", num_maiores_idade);

    for (int i = 0; i < 5; i++) {
        printf("Votos para %s: %d\n", jogadoras[i], votos[i]);
    }
}
