#include <stdio.h>

main() {
    int num, divisores = 1;

    printf("Digite um numero inteiro que mostrarei os divisores dele: ");
    scanf("%d", &num);   

    do{
        if (num % divisores == 0){
            divisores = divisores;
            printf("\n-> O numero %d, eh divisivel por: %d", num, divisores);
        }
        divisores++;
    } while (divisores <= num);
}