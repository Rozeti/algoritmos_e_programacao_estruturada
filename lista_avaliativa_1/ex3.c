#include<stdio.h>

main(){
    float ladoA, ladoB, ladoC;

    printf("Digite tres valores quaisquer para saber se eles podem ser valores dos lados de um triangulo: ");
    printf("\n-> Primeiro valor: ");
    scanf("%f", &ladoA);
    printf("\n-> Segundo valor: ");
    scanf("%f", &ladoB);
    printf("\n-> Terceiro valor: ");
    scanf("%f", &ladoC);

    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA){
        if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoA && ladoB != ladoC && ladoC != ladoA && ladoC != ladoB){
            printf("\n-> Os valores informados podem formar sim um triangulo! Sendo esse um Triangulo Escaleno!");
        }
        if ((ladoA == ladoB && ladoA != ladoC) || (ladoB == ladoC && ladoA != ladoB) || (ladoB == ladoA && ladoB != ladoC) || (ladoB == ladoC && ladoB != ladoA) || (ladoC == ladoA && ladoC != ladoB) || (ladoC == ladoB && ladoC != ladoA)){
            printf("\n-> Os valores informados podem formar sim um triangulo! Sendo esse um Triangulo Isosceles!");
        }
        if (ladoA == ladoB && ladoA == ladoC){
            printf("\n-> Os valores informados podem formar sim um triangulo! Sendo esse um Triangulo Equilatero!");
        }
    }else{
        printf("\n-> Os valores informados não podem forma um triangulo por nao obedecerem a condicao de existencia dos triangulos!");
    }
}