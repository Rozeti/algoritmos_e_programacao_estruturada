#include<stdio.h>

main(){
    int A , *ponteiroA;
    int B , *ponteiroB;

    printf("--> Informe um valor pra A: ");
    scanf("%d", &A);
    fflush(stdin);

    printf("\n--> Informe um valor pra B:");
    scanf("%d", &B);
    fflush(stdin);

    ponteiroA = A;
    ponteiroB = B;

    if(ponteiroA > ponteiroB){
        printf("---> O endereco de A eh o maior: %d", &ponteiroA);    
    }else{
        printf("---> O endereco de B eh o maior: %d", &ponteiroB);     
    }
}