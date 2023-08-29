#include<stdio.h>
#include<math.h>

main(){

    float custofabrica, distribuidor, imposto, custofinal;

    printf("Digite o valor do custo de fabrica do carro de seu interesse: R$ ");
    scanf("%f", &custofabrica);

    distribuidor = custofabrica * 28 / 100;
    imposto = custofabrica * 45 / 100;

    custofinal = custofabrica + distribuidor + imposto;

    printf("\n----------> Vlores <----------\n");

    printf("\nO custo final do carro de seu interesse e: R$ %.2f \n\nSendo o valor da porcentagem do distribuidor igual a: R$ %.2f \n\nE o valor do imposto igual a: R$ %.2f", custofinal, distribuidor, imposto);

}