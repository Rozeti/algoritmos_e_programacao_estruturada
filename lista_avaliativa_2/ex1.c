#include <stdio.h>

int validacaoQuantidade() {
    int quantidade;

    printf("\n\n-------> Calculo de salario <-------");
    printf("\n\n--> Informe a quantidade de pecas fabricadas pelo funcionario: ");
    scanf("%d", &quantidade);

    while (quantidade < 0) {
        printf("\n# Quantidade invalida. Por favor informe um valor valido (que nao seja negativo): ");
        scanf("%d", &quantidade);
    }
    return quantidade;
}

float salarioFinal(int quantidade) {
    float salarioBase = 600.0;
    float adicional = 0.0;

    if (quantidade > 50 && quantidade <= 80) {
        adicional = 0.50 * (quantidade - 50);
    } else if (quantidade > 80) {
        adicional = 0.50 * 30 + 0.75 * (quantidade - 80);
    }

    float sal_total = salarioBase + adicional;
    return sal_total;
}

void mostrarSalarioFinal(float salario) {
    printf("---> O salario final do funcionario eh de R$ %.2f\n", salario);
}

void mostrarCriterios() {
    printf("\n\n------> Criterios para o adicional <------");
    printf("\n---> Se o numero de pecas for inferior ou igual a 50, nao existe adicional de produtividade;");
    printf("\n---> Se o numero de pecas for superior a 50 e inferior ou igual a 80, o adicional de produtividade sera de R$ 0,50 para cada peca fabricada acima de 50;");
    printf("\n---> Se o numero de pecas for superior a 80, o adicional de produtividade sera de R$ 0,50 para cada peca fabricada acima de 50 ate 80 e de R$ 0,75 por peca fabricada acima das 80.\n");
}

main() {
    char opcao, opcao2;
    int contador = 0;

    do {
        if (contador == 0){
            printf("\n--> Deseja ver a lista de criterios dos adicionais (s- para SIM ou n - para NAO): ");
            scanf(" %c", &opcao);
            while (opcao != 's' && opcao != 'n') {
                printf("\n\n# Opcao invalida, por favor informe uma opcao valida (s - para SIM ou n - para NAO): ");
                scanf(" %c", &opcao);
            }
            if (opcao == 's'){
                mostrarCriterios();
                contador++;
            }
        }

        int quantidade = validacaoQuantidade();
        float salario = salarioFinal(quantidade);
        mostrarSalarioFinal(salario);

        printf("\n\n--> Deseja calcular outro salario (s- para SIM ou n - para NAO): ");
        scanf(" %c", &opcao2);

        while (opcao2 != 's' && opcao2 != 'n') {
            printf("\n\n# Opcao invalida, por favor informe uma opcao valida (s - para SIM ou n - para NAO): ");
            scanf(" %c", &opcao2);
        }
    } while (opcao2 == 's');
}
