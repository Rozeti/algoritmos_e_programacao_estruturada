#include<stdio.h>
#include<math.h>

main(){

    float real, dolar = 4.96, convert;

    printf("Digite um valor em real que mostrarei a convercao desse valor para dolar: ");
    
    scanf("%f", &real);

    convert = real / dolar;

    printf("\n-> Real: R$ %.2f", real);
    printf("\n-> Dolar: USD$ %.2f", convert);

}
