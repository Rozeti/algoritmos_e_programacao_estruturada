#include<stdio.h>

main(){
    int num, contador = 1;

    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    while (contador <= num){
        printf("\n- %d", contador);
        contador += 2;
    }  
}
