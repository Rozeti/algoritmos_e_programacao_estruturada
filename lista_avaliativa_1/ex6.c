#include<stdio.h>

main(){
    float x, y;

    printf("-> Digite o valor da coordenada do ponto X (podendo ter ate 2 casas decimais): ");
    scanf("%f", &x );
    printf("-> Digite o valor da coordenada do ponto Y (podendo ter ate 2 casas decimais): ");
    scanf("%f", &y);
    
    if (x > 0){
        if (y > 0){
            printf("O ponto se encontra no primeiro quadrante, p(%.2f, %.2f)", x, y);
        }else if (y == 0){
            printf("O ponto se encontra no Eixo X, p(%.2f, %.2f)", x, y);
        }else{
            printf("O ponto se encontra no quarto quadrante, p(%.2f, %.2f)", x, y);
        } 
    }
    if (y > 0){
        if (x == 0){
            printf("O ponto se encontra no Eixo Y, p(%.2f, %.2f)", x, y);
        }else if (x < 0){
            printf("O ponto se encontra no segundo quadrante, p(%.2f, %.2f)", x, y);
        }
    }
    if (x < 0 && y < 0){
        printf("O ponto se encontra no terceiro quadrante, p(%.2f, %.2f)", x, y);
    }
    if(x == 0 && y == 0){
        printf("O ponto esta na Origem");
    }  
}
