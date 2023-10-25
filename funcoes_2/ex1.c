#include<stdio.h>

int imprimir(int opcao){
    printf("--> Escolha uma das opcoes de pagamento abaixo: \n\n");
    printf("-> Opcao 1: a vista com 10%% de desconto");
    printf("\n-> Opcao 2: em duas vezes ");
    printf("\n-> Opcao 3: de 3 ate 10 vezes com 3%% de juros ao mes sobre o valor de cada prestacao\n");

    scanf("%d", &opcao);
    return opcao;
}

float opcaoEscolhida(float totalGasto, int retornoOpcao){
    float totalPagar;
    int quantidadeMes;
    if (retornoOpcao == 1){
        totalPagar = totalGasto - (totalGasto * 0.1);
        return totalPagar;
    }else if (retornoOpcao == 2){
        totalPagar = totalGasto / 2;
        return totalPagar;
    }else if (retornoOpcao == 3 && totalGasto >= 101){
        printf("\n\n--> Em quantas vezes voce quer parcelar: ");
        scanf("%d", &quantidadeMes);
        totalPagar = (totalGasto / quantidadeMes) * 0.3;
        return totalPagar;
    }
}

main(){
    float totalGasto, opcao = 0;

    printf("--> Qual o total gasto pelo cliente: ");
    scanf("%f", &totalGasto);

    printf("\n\n");

    int retornoOpcao = imprimir(opcao);

    if (retornoOpcao == 1){
        printf("\n--> Opcao escolhida: 1");
        float totalPagar = opcaoEscolhida(totalGasto, retornoOpcao);
        printf("\n\n--> O valor total a pagar eh: R$ %.2f", totalPagar);
    }else if (retornoOpcao == 2){
        printf("\n--> Opcao escolhida: 2");
        float totalPagar = opcaoEscolhida(totalGasto, retornoOpcao);
        printf("\n\n--> O valor total a pagar eh: R$ %.2f nas 2 prestacoes", totalPagar);
    }else if (retornoOpcao == 3 && totalGasto > 100){
        printf("\n--> Opcao escolhida: 3");
        float totalPagar = opcaoEscolhida(totalGasto, retornoOpcao);
        printf("\n--> O valor total a pagar eh: R$ %.2f em todas as prestacoes", totalPagar);
    }else if (retornoOpcao == 3 && totalGasto <= 100){
        printf("\n--> Opcao escolhida: 3");
        printf("\n\n--> O total a pagar nao eh superior a R$ 100,00");
        return 0;
    }
}