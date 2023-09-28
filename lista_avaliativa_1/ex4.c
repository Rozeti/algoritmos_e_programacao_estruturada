#include<stdio.h>

main(){
    int ladoA, ladoB, ladoC, quadradoA, quadradoB, quadradoC;

    printf("Digite tres valores quaisquer para saber se eles podem ser valores dos lados de um triangulo: ");
    printf("\n-> Primeiro valor: ");
    scanf("%d", &ladoA);
    printf("\n-> Segundo valor: ");
    scanf("%d", &ladoB);
    printf("\n-> Terceiro valor: ");
    scanf("%d", &ladoC);

    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        quadradoA= ladoA * ladoA;
        quadradoB= ladoB * ladoB;
        quadradoC= ladoC * ladoC;
        if (quadradoA == quadradoB + quadradoC || quadradoB == quadradoA + quadradoC || quadradoC == quadradoA + quadradoB){
            printf("->Seu triangulo eh um triangulo retangulo!");
        }else if (quadradoA > quadradoB + quadradoC || quadradoB > quadradoA + quadradoC || quadradoC > quadradoA + quadradoB){
            printf("Seu triangulo eh um triangulo obtusangulo!");
        }else{
            printf("O seu triangulo eh um triangulo acutangulo!");
        }
    }
}
