#include<stdio.h>

main(){
    float alturaZe = 1.1, alturaChico = 1.5;
    int contador = 0;

    do{
        alturaChico += 0.02;
        alturaZe += 0.03;
        contador ++;
    } while (alturaChico > alturaZe);

    printf("Serao necessarios %d anos para que Ze fique maior que Chico!\n", contador);
    printf("\n-> Chico tera: %.2fm de altura enquanto Ze tera te passado medindo: %.2fm de altura", alturaChico, alturaZe);
}