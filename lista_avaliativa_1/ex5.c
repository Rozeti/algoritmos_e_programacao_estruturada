#include<stdio.h>
#include<math.h>

main(){
    float x1, x2, y1, y2, distancia;

    printf("-> Digite agora o valor de X no primeiro ponto: ");
    scanf("%f", &x1 );
    printf("-> Digite agora o valor de Y no primeiro ponto: ");
    scanf("%f", &y1);
    fflush(stdin);

    printf("\n-> Digite agora o valor de X no segundo ponto: ");
    scanf("%f", &x2);
    printf("-> Digite agora o valor de Y no segundo ponto: ");
    scanf("%f",&y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("\n-> A distancia entre os pontos p1(%.2f, %.2f) e p2(%.2f, %.2f) eh igual a: %.4f", x1, y1, x2, y2, distancia);
}
