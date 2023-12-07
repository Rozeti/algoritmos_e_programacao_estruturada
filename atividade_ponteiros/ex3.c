#include<stdio.h>

main(){
    int a, *ponteiroA;
    int b, *ponteiroB; 

    printf("--> Informe um valor para A: "); 
    scanf("%d",&a);

    printf("--> Informe um valor para B: "); 
    scanf("%d",&b);

    ponteiroA = &a; 
    ponteiroB = &b; 

    if (*ponteiroA > *ponteiroB){
    printf("\n---> O mairo enderco eh o de A, com conteudo: %d\n", *ponteiroA);
    }else{
    printf("\n---> O mairo endereco eh o d B, com conteudo: %d\n", *ponteiroB);
    }
}