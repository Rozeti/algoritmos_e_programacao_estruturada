#include<stdio.h>

int diasMes(int mes){
    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    return diasMes[mes - 1];
}

void calcularIdade(int dia, int mes, int ano, int diaAtual, int mesAtual, int anoAtual){
    int totalAnos, totalMes, totalDias;
    if (diaAtual >= dia){
        totalDias = diaAtual - dia;
    }else{
        totalDias = diaAtual + diasMes(mes) - dia;
        mesAtual--;
    }
    if (mesAtual >= mes){
        totalMes = mesAtual - mes;
    }else{
        totalMes = mesAtual + 12 - mes;
        anoAtual--;
    }
    totalAnos = anoAtual - ano;
    
    printf("Idade: %d, meses: %d, dias: %d", totalAnos, totalMes, totalDias);
}

main(){
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("-> Informe a sua data de nascimento: ");
    scanf("%d", &dia);
    scanf("%d", &mes);
    scanf("%d", &ano);
    fflush(stdin);

    printf("\n");

    printf("-> Informe a data atual: ");
    scanf("%d", &diaAtual);
    scanf("%d", &mesAtual);
    scanf("%d", &anoAtual);

    calcularIdade(dia, mes, ano, diaAtual, mesAtual, anoAtual);
}
