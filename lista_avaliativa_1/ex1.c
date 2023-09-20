#include<stdio.h>
#include<math.h>

main(){
    float num, funcao;
    int raiz;

    printf("-> Digite o um valor para 'X', para encontrarmos o valor da funcao f(x): ");
    scanf("%f", &num);

    funcao = (5 * num + 3);
    raiz = sqrt(pow(num, 2) - 16);

    while (raiz < 0){
        printf("\n-> Com o valor informado para X nao eh possivel encontrar o valor da funcao. Digite outro valor. Caso queira digite outro valor: ");
        scanf("%f", &num);
        raiz = sqrt(pow(num, 2) - 16);
    }if (raiz > 0){
        funcao = (5 * num + 3) / sqrt(pow(num, 2) - 16);
        printf("\n-> O valor da funcao f(x) eh: %.2f", funcao);
    }
}
