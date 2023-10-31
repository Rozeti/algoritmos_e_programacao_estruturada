#include<stdio.h>
#include<stdlib.h>

void imprimir(int matriz[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j =0; j < 10; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
//trocar linha 2 pela linha 8
void trocarLinha2Linha8(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++){
            aux = matriz[1][i];
            matriz[1][i] = matriz[7][i];
            matriz[7][i] = aux;
        }
}
//trocar a coluna 4 com a coluna 10
void trocarColuna4Coluna10(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++){
            aux = matriz[i][3];
            matriz[i][3] = matriz[i][9];
            matriz[i][9] = aux;
        }
}
//trocando diagonais
void trocarDiagonais(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++){
            aux = matriz[i][i];
            matriz[i][i] = matriz[i][9 - i];
            matriz[i][9 - i] = aux;
        }
}
//trocando a linha 5 pela linha 10
void trocarLinha5Linha10(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++){
            aux = matriz[4][i];
            matriz[4][i] = matriz[i][9];
            matriz[i][9] = aux;
        }
}

main(){
    int matriz[10][10];
    for (int i = 0; i < 10; i++){
        for (int j =0; j < 10; j++){
            matriz[i][j] = i * 10 +j;
        }
        printf("\n");
    }   

    //impressão da matriz original
    imprimir(matriz);

    //trocando a linha 2 pela linha 8
    trocarLinha2Linha8(matriz);

    //trocando a coluna 4 pela coluna 10
    trocarColuna4Coluna10(matriz);

    //trocando digonais
    trocarDiagonais(matriz);

    //trocando a linha 5 pela linha 10
    trocarLinha5Linha10(matriz);
    printf("\n");
    imprimir(matriz);
}