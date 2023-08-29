#include<stdio.h>
#include<math.h>

main(){

    float salario, percent, reajuste, calculo;

    printf("Digite o valor do seu salario atua: R$ ");
    scanf("%f", &salario);

    printf("Digite agora o percentual de reajuste: ");
    scanf("%f", &percent);

    calculo = percent * salario / 100;
    reajuste = calculo + salario;

    printf("O valor do seu novo salario e: R$ %.2f", reajuste);

}
