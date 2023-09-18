#include<stdio.h>

main(){
    int fruta, valor, conta = 0, quantidade = 0, opcao = 0;

    do{
        printf("----------> FRUTAS <----------");
        printf("\n1- Abacaxi --> R$: 5,00");
        printf("\n2- Maca -----> R$: 1,00");
        printf("\n3- Pera -----> R$: 4,00");
        printf("\n-> Valor unitario <-\n");
        printf("------------------------------");
        printf("\n-> Qual a fruta que voce vai querer: ");
        scanf("%d", &fruta);
        printf("-> Qual a quantidade que voce vaiquerer ");
        scanf("%d", &quantidade);

        switch (fruta){
        case 1:
            valor = 5 * quantidade;
            break;
        case 2:
            valor = 1 * quantidade;
            break;
        case 3:
            valor = 4 * quantidade;
            break;
        default:
            break;
        }

    conta += valor;

    printf("-->O valor atual do seu pedido eh: R$ %d", conta);
    printf("\nDeseja continuar pedindo? (1 - Sim ou 0 - Nao): ");
    scanf("%d", &opcao);

    } while (opcao == 1);   

    printf("\n-->O valor total a ser pago eh: R$ %d.00", conta);
}
