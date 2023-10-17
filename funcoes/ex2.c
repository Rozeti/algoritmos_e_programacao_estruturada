#include<stdio.h>

void imprimir(int num){
    if (num == 1){
        printf("Mes: Janeiro, com 31 dias.");
    }else if (num == 2){
        printf("Mes: Fevereiro, com 28 dias.");
    }else if (num == 3){
        printf("Mes: Marco, com 31 dias.");
    }else if (num == 4){
        printf("Mes: Abril, com 30 dias.");
    }else if (num == 5){
        printf("Mes: Maio, com 31 dias.");
    }else if (num == 6){
        printf("Mes: Junho, com 30 dias.");
    }else if (num == 7){
        printf("Mes: Julho, com 31 dias.");
    }else if (num == 8){
        printf("Mes: Agosto, com 31 dias.");
    }else if (num == 9){
        printf("Mes: Setembro, com 30 dias.");
    }else if (num == 10){
        printf("Mes: Outubro, com 31 dias.");
    }else if (num == 11){
        printf("Mes: Novembro, com 30 dias.");
    }else if (num == 12){
        printf("Mes: Dezembro, com 31 dias.");
    }
}
main(){
    int num;
    
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &num);
    while (num < 1 || num > 12){
        printf("\n#Valor Invalido. Pf digite um numero de 1 a 12: ");
        scanf("%d", &num);
    }
    printf("\n\n");
    imprimir(num);
}
