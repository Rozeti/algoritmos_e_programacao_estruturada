#include<stdio.h>
#include<math.h>

main(){

    float custo, frete, despesa, venda, valorbruto, lucro, percent;

    printf("Digite o valor de custo do produto: R$ ");
    scanf("%f", &custo); 

    printf("Digite o valor do frete de envio do produto: R$ ");
    scanf("%f", &frete);

    printf("Digite o valor das eventuais despesas: R$ ");
    scanf("%f", &despesa);

    valorbruto = custo + frete + despesa;

    printf("O valor de custo do produto e: R$ %.2f", valorbruto);

    printf("\nDigite agora o valor por quanto voce deseja vender este produto: R$ ");
    scanf("%f", &venda);

    lucro = venda - valorbruto;
    percent = 100 * lucro / venda;

    printf("\nO lucro que voce tera sob o produto e: R$ %.2f; \nA porcentagem de lucro do produto e: %.1f%%.", lucro, percent);

}
