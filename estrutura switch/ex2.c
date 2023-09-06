#include<stdio.h>

main(){

    int produto, quantidade;
    float valorFinal;

    printf("->Escolha o que voce deseja do cardapio<-");

    printf("\n100 - Cachorro quente ------> R$ 10,10 ");
    printf("\n101 - Bauru simples --------> R$ 8,30 ");
    printf("\n102 - Bauru c/ ovo ---------> R$ 8,50 ");
    printf("\n103 - Hamburger ------------> R$ 12,50 ");
    printf("\n104 - Cheeseburger ---------> R$ 13,25 \n");
    printf("<-------------------------------------->\n");

    printf("Qual o numero do seu pedido: ");
    scanf("%d", &produto);
    printf("\nQual a quantidade que voce vai querer desse produto: ");
    scanf("%d", &quantidade);

    switch (produto){
    case 100:
        valorFinal = 10.10 * quantidade;
        break;
    case 101:
        valorFinal = 8.30 * quantidade;
        break;
    case 102:
        valorFinal = 8.50 * quantidade;
        break;
    case 103:
        valorFinal = 12.50 * quantidade;
        break;
    case 104:
        valorFinal = 13.25 * quantidade;
        break;  
    default:
        printf("O codigo do pedido que voce digitou nao existe");
        break;
    }

    printf("\n<--------------Conta------------------>\n");
    printf("\n-> O total a pagar eh de: R$ %.2f", valorFinal);
}