#include<stdio.h>

void imprimir(int num){
    if (num == 1){
        printf("O mes que voce escolheu foi Janeiro, com 31 dias.");
    }else if (num == 2){
        printf("O mes que voce escolheu foi Fevereiro, com 28 dias.");
    }else if (num == 3){
        printf("O mes que voce escolheu foi Marco, com 31 dias.");
    }else if (num == 4){
        printf("O mes que voce escolheu foi Abril, com 30 dias.");
    }else if (num == 5){
        printf("O mes que voce escolheu foi Maio, com 31 dias.");
    }else if (num == 6){
        printf("O mes que voce escolheu foi Junho, com 30 dias.");
    }else if (num == 7){
        printf("O mes que voce escolheu foi Julho, com 31 dias.");
    }else if (num == 8){
        printf("O mes que voce escolheu foi Agosto, com 31 dias.");
    }else if (num == 9){
        printf("O mes que voce escolheu foi Setembro, com 30 dias.");
    }else if (num == 10){
        printf("O mes que voce escolheu foi Outubro, com 31 dias.");
    }else if (num == 11){
        printf("O mes que voce escolheu foi Novembro, com 30 dias.");
    }else if (num == 12){
        printf("O mes que voce escolheu foi Dezembro, com 31 dias.");
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