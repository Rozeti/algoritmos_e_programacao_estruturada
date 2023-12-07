#include <stdio.h>

void trocandoValores(int *pa, int *pb){
    int numTroca;

    numTroca = *pa;

    *pa = *pb;
    *pb = numTroca;
}

main(){
    int a, b;

    printf("--> Informe um valor para A: ");
    scanf("%d", &a);

    printf("--> Informe um valor para B: ");
    scanf("%d", &b);

    trocandoValores(&a, &b);

    printf("\n\n--> Novo valor de A: %d", a);
    printf("\n--> Novo valor de B: %d", b);
}