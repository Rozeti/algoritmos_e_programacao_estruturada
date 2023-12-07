#include <stdio.h>

main() {
    
    int numeroAluno, alunoMaisBaixo, alunoMaisAlto;
    float altura, alturaMaisBaixa = 10000.0, alturaMaisAlta = 0.0;

    for (int i = 0; i < 10; i++) {
        printf("\n--> Informe o numero do aluno %d: ", i + 1);
        scanf("%d", &numeroAluno);

        printf("--> Informe a altura do aluno %d: ", i + 1);
        scanf("%f", &altura);

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            alunoMaisBaixo = numeroAluno;
        }

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            alunoMaisAlto = numeroAluno;
        }
    }
    printf("\n\n--> Aluno mais baixo:\n");
    printf("-> Numero do aluno: %d\n", alunoMaisBaixo);
    printf("-> Altura: %.2f metros\n", alturaMaisBaixa);

    printf("\n\n--> Aluno mais alto:\n");
    printf("-> Numero do aluno: %d\n", alunoMaisAlto);
    printf("-> Altura: %.2f metros\n", alturaMaisAlta);
}