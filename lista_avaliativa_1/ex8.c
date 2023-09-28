#include<stdio.h>

main(){
    float salario = 0, mediaSalario = 0, maiorsalario = 0, salarioAte100 = 0, percentSalario; 
    int numeroFilhos, mediaFilhos = 0, contador = 0;

    printf("--> PARA ENCERRAR A LEITURA DE DADOS INFORME UM SALARIO NEGATIVO!! <--");
    do{
        printf("-> Informe o valor do seu salario: ");
        scanf("%f", &salario);
    
        printf("\n-> Informe a quantidade de filhos que voce possui: ");
        scanf("%d", &numeroFilhos);

        contador++;
        mediaSalario += salario / contador;
        mediaFilhos += numeroFilhos / contador;

        if (salario > maiorsalario){
            maiorsalario = salario;
        }

        if (salario <= 100){
            salarioAte100 += salario;
        }
        percentSalario = salarioAte100 / contador;

        printf("\na) Media do salario da populacao: R$ %.2f", mediaSalario);
        printf("\nb) Media do numero de filhos: %d", mediaFilhos);
        printf("\nc) Maior salario: R$ %.2f", maiorsalario);
        printf("\nd) Percentual de pessoas com salario ate R$100,00: %d", percentSalario);
    } while (salario >= 0);
}
