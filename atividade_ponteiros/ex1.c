#include <stdio.h>
#include <string.h>

main(){
    int num;
    char nome[25];
    float num2;

    printf("--> Informe um valor numerico inteiro: ");
    scanf("%d", &num);
    fflush(stdin);

    printf("\n--> Digite uma frase: ");
    fgets(nome, sizeof(nome), stdin);
    fflush(stdin);

    printf("\n--> Informe um valor numerico com casa decimal: ");
    scanf("%f", &num2);
    fflush(stdin);

    int *numeroAlterado = &num;
    char *nomeAlterado = &nome;
    float *numero2Alterado = &num2;

    printf("\n---> Valor numerico inteiro antes: %d", num);
    printf("\n---> Seu nome antes: %s", nome);
    printf("---> Valor numerico com casa decimal antes: %.2f", num2);

    *numeroAlterado = num + 5;
    strcpy(nomeAlterado, "Maria");
    *numero2Alterado = num2 * 4;

    printf("\n\n---> Valor numerico inteiro depois: %d", num);
    printf("\n---> Sueu nome depois: %s", nome);
    printf("\n---> Valor numerico com casa decimal depois: %.2f", num2);
}