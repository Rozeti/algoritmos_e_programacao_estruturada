#include <stdio.h>

int main() {
    int elevador_A = 0, elevador_B = 0, elevador_C = 0;
    int matutino = 0, vespertino = 0, noturno = 0;
    int total_servicos = 0;

    for (int i = 0; i < 50; i++) {
        char elevador, periodo;

        printf("---> MORADOR: %d:\n", i + 1);

        printf("Qual elevador voce utiliza com mais frequencia (A/B/C)? ");
        scanf(" %c", &elevador);

        printf("Qual periodo voce utiliza o elevador (M/V/N)? ");
        scanf(" %c", &periodo);

        switch (elevador) {
            case 'A':
                elevador_A++;
                break;
            case 'B':
                elevador_B++;
                break;
            case 'C':
                elevador_C++;
                break;
        }

        switch (periodo) {
            case 'M':
                matutino++;
                break;
            case 'V':
                vespertino++;
                break;
            case 'N':
                noturno++;
                break;
        }

        total_servicos++;
    }

    char periodo_mais_usado;
    int periodo_mais_usado_count = 0;

    if (matutino > periodo_mais_usado_count) {
        periodo_mais_usado = 'M';
        periodo_mais_usado_count = matutino;
    }

    if (vespertino > periodo_mais_usado_count) {
        periodo_mais_usado = 'V';
        periodo_mais_usado_count = vespertino;
    }

    if (noturno > periodo_mais_usado_count) {
        periodo_mais_usado = 'N';
    }

    char elevador_mais_frequentado;
    int elevador_mais_frequentado_count = 0;

    if (elevador_A > elevador_mais_frequentado_count) {
        elevador_mais_frequentado = 'A';
        elevador_mais_frequentado_count = elevador_A;
    }

    if (elevador_B > elevador_mais_frequentado_count) {
        elevador_mais_frequentado = 'B';
        elevador_mais_frequentado_count = elevador_B;
    }

    if (elevador_C > elevador_mais_frequentado_count) {
        elevador_mais_frequentado = 'C';
    }

    int menor_periodo_count = matutino;
    if (vespertino < menor_periodo_count) {
        menor_periodo_count = vespertino;
    }
    if (noturno < menor_periodo_count) {
        menor_periodo_count = noturno;
    }

    float diferenca_percentual = ((float)(periodo_mais_usado_count - menor_periodo_count) / periodo_mais_usado_count) * 100;

    int elevador_media_utilizacao_count = (elevador_A + elevador_B + elevador_C) / 3;
    float percentagem_media_utilizacao = ((float)elevador_media_utilizacao_count / total_servicos) * 100;

    printf("Periodo mais usado de todos: %c (Elevador %c)\n", periodo_mais_usado, elevador_mais_frequentado);
    printf("Elevador mais frequentado: %c (Período %c)\n", elevador_mais_frequentado, periodo_mais_usado);
    printf("Diferenca percentual entre os horarios mais usados e o menos usados: %.2f%%\n", diferenca_percentual);
    printf("Percentagem sobre o total de servicos do elevador de media utilizacao: %.2f%%\n", percentagem_media_utilizacao);
}