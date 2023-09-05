#include<stdio.h>

main(){

    float salarioAtual, salarioFinal;
    int tempServ;

    printf("-> Digite o valor do seu salario atual: R$ ");
    scanf("%f", &salarioAtual );
    printf("->Digite o seu tempo de contribuicao na empresa (caso tenha um tempo menor de 1 ano digite -1): ");
    scanf("%d", &tempServ );

    if (salarioAtual <= 500 || salarioAtual > 500 && salarioAtual <= 1000 || salarioAtual > 1000 && salarioAtual <= 1500 || salarioAtual > 1500 && salarioAtual <= 2000 || salarioAtual > 2000){

        if (salarioAtual <= 500){
            salarioFinal = (salarioAtual * 0.25) + salarioAtual;
        }
        else if (salarioAtual > 500 && salarioAtual <= 1000){
            salarioFinal = (salarioAtual * 0.2) + salarioAtual;
        }
        else if (salarioAtual > 1000 && salarioAtual <= 1500){
            salarioFinal = (salarioAtual * 0.15) + salarioAtual;
        }
        else if (salarioAtual > 1500 && salarioAtual <= 2000){
            salarioFinal = (salarioAtual * 0.1) + salarioAtual;
        }
        else{
            salarioFinal = salarioAtual;
        }    
    }

    if (tempServ == -1 || tempServ >= 1 && tempServ <= 3 || tempServ >= 4 && tempServ <= 6 || tempServ >= 7 && tempServ <= 10 || tempServ > 10){

        if (tempServ == -1){
            salarioFinal = salarioFinal;
        }
        else if (tempServ >= 1 && tempServ <= 3){
            salarioFinal = salarioFinal + 100;
        }
        else if (tempServ >= 4 && tempServ <= 6){
            salarioFinal = salarioFinal + 200;
        }
        else if (tempServ >= 7 && tempServ <= 10){
            salarioFinal = salarioFinal + 300;
        }
        else if (tempServ > 10){
            salarioFinal = salarioFinal + 500;
        }    
    }

    printf("\n---------------------------------\n");
    printf("\n-> Seu salario reajustado eh: R$ %.2f", salarioFinal);
}
