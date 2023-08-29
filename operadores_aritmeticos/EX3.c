#include<stdio.h>
#include<math.h>

main(){

    float largura, comprimento, area;

    printf("Digite a medida da largura da sala: ");
    scanf("%f", &largura);

    printf("Digite agora a medida do comprimento da sala: ");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("\n--------------------");
    printf("\nA area da sala e: %.2fm2", area);

}
