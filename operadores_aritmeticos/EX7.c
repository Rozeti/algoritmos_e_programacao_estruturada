#include<stdio.h>
#include<math.h>

main(){

    float raio, area;

    printf("Digite o valor do raio da circunferencia: ");
    scanf("%f", &raio);

    area = pow(raio, 2) * 3.1416;

    printf("\n---------> Valores da circunferencia <-----------\n");

    printf("\nO valor do raio e: %.2f \nO valor da area e: %.2f", raio, area);


}
