#include<stdio.h>
#include<math.h>

main(){

    int carrosvendidos;
    float valorvendas, salariofixo, comissao, salariofinal;

    printf("Digite a quantidade de carros que voce vendeu: ");
    scanf("%d", &carrosvendidos);

    printf("\nDigite o valor total de suas vendas: R$ ");
    scanf("%f", &valorvendas);

    printf("\nDigite o valor do seu salario fixo: R$ ");
    scanf("%f", &salariofixo);

    printf("\nDigite o valor da sua comissao por cada carro vendido: ");
    scanf("%f", &comissao);

    salariofinal = salariofixo + (comissao * carrosvendidos) + (0.05 * valorvendas);

    printf("\n--------------------\n\n");
    printf("O valor do seu salario final e de: R$ %.2f", salariofinal);
}
