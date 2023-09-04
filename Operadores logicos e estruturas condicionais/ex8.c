#include<stdio.h>

main(){

    int idade, tempServ;

    printf("Digite sua idade: ");
    scanf("%d", &idade );
    printf("Digite o seu tempo de contribuicao: ");
    scanf("%d", &tempServ );

    if (idade >= 65 || tempServ >= 30 || (idade >= 60 && tempServ >= 25)){
        printf("Voce ja pode se aposentar!");
    }
    else{
        printf("Voce nao pode se aposentar, por sua idade e tempo de contribuicao não corresponderem com as condicoes para tal.");
    }
}