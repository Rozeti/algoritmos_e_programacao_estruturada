#include<stdio.h>

main(){
    float vetor[5];
    int opcao = 0;

    printf("--> Digite 5 valores para o vetor: \n");
    for (int i = 0; i < 5; i++){
        scanf("%f", &vetor[i]);
    }
    
    printf("\n");

    printf("--> Escolha uma opcao: 0 / 1 / 2 ");
    printf("\n-> 0 - Encerrar programa; \n-> 1 - Mostar o vetor em ordem direta; \n-> 2 - Mostrar vetor em posicao inversa.\n-> ");
    scanf("%d", &opcao);

    while (opcao != 0 && opcao != 1 && opcao != 2){
        printf("# Valor invalido! Pf digite uma opcao valida: 0 / 1 / 2: ");
        scanf("%d", &opcao);
    }

    do{ 
        if (opcao == 1){
            printf("--> 1: Ordem direta do Vetor: ");
            for (int i = 0; i < 5; i++){
                printf("\n-> Posicao: %d - Valor: %.2f", i, vetor[i]);
            }
        }
        if (opcao == 2){
            printf("--> 2: Ordem inversa do Vetor: ");
            for (int i = 4; i >= 0; i--){
                printf("\n-> Posicao: %d - Valor: %.2f", i, vetor[i]);
            }
        }

        printf("\n\n");

        printf("--> Escolha uma opcao: 0 / 1 / 2 ");
        printf("\n-> 0 - Encerrar programa; \n-> 1 - Mostar o vetor em ordem direta; \n-> 2 - Mostrar vetor em posicao inversa.\n-> ");
        scanf("%d", &opcao);

        while (opcao != 0 && opcao != 1 && opcao != 2){
            printf("# Valor invalido! Pf digite uma opcao valida: 0 / 1 / 2: ");
            scanf("%d", &opcao);
        }
    } while (opcao == 1 || opcao == 2);
}