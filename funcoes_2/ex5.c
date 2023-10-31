#include<stdio.h>

int diasMes(int mes){
    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return diasMes[mes - 1];
}

main(){
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("-> Informe a sua data de nascimento: ");
    scanf("%d, %d, %d", &dia, &mes, &ano);

    printf("\n");

    printf("-> Informe a data atual: ");
    scanf("%d, %d, %d", &diaAtual, &mesAtual, &anoAtual);
}
