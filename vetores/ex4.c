#include<stdio.h>

main(){
    int num[8], soma = 0, x, y;

    for (int i = 0; i < 8; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 8; i++){
        printf("\n--> Posicao: %d, Valor digitado: %d", i, num[i]);
    }

    do{
        printf("\n-> Escolha uma das posicoes para somar (0-7): ");
        scanf("%d", &x);
        printf("-> Digite outra posicao do vetor para ser somado (0-7): ");
        scanf("%d", &y);

        if ((x >= 0 && x < 8) && (y >= 0 && y < 8)){
            for (int i = 0; i < 8; i++){
                if (i == x || i == y){
                    soma += num[i];
                }
            }    
        }else {
            printf("\n#Indices errados: ");
        }
    } while (x < 0 || x > 7 && y < 0 || y > 7);
    
    printf("\n\n---> A soma dos valores das posicoes X e Y do vetor eh igual a: %d", soma);
}
