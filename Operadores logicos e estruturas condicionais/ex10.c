#include<stdio.h>
#include<math.h>

main(){

    float a, b , c, delta, x1, x2;

    printf("->Digite o valor do coeficiente de a: ");
    scanf("%f", &a);

    printf("\n->Digite o valor do coeficiente de b: ");
    scanf("%f", &b);

    printf("\n->Digite o valor do coeficiente de c: ");
    scanf("%f", &c);
    fflush(stdin);

    delta = pow(b, 2) - 4 * a *c;

    if (a == 0){
        printf("Os valores que voce digitou nao correspondem com uma equacao de segundo grau");
    }
    else if (delta == 0){
        x1 = (-(b) + sqrt(delta)) / (2 * a);

        printf("\nO valor de delta e: %.2f \n", delta);
        printf("Sua equacao de segundo grau so tem uma raiz: %.2f", x1);
    }
    else if (delta > 0){
        x1 = (-(b) + sqrt(delta)) / (2 * a);
        x2 = (-(b) - sqrt(delta)) / (2 * a);

        printf("\nO valor de delta e: %.2f \n", delta);
        printf("O valor das raizes da sua equacao sao: %.2f, %.2f", x1, x2);
    }
    else if (delta < 0){
        printf("Nao existe raiz para a sua equacao");
    }
}
