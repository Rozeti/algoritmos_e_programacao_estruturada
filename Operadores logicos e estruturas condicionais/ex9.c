#include<stdio.h>

main(){

    float salarioAtual, salarioFinal;
    int tempServ;

    printf("Digite o valor do seu salário atual: R$");
    scanf("%f", &salarioAtual );
    printf("Digite o seu tempo de contribuicao na empresa (caso tenha um tempo menor de 1 ano digite -1): ");
    scanf("%d", &tempServ );

    if (salarioAtual <= 500 && tempServ == -1){
        salarioFinal = (salarioAtual * 0.25) + salarioAtual;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual <= 500 && 1 <= tempServ <= 3){
        salarioFinal = (salarioAtual * 0.25) + salarioAtual + 100;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual <= 500 && 4 <= tempServ <= 6){
        salarioFinal = (salarioAtual * 0.25) + salarioAtual + 200;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual <= 500 && 7 <= tempServ <= 10){
        salarioFinal = (salarioAtual * 0.25) + salarioAtual + 300;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual <= 500 && tempServ > 10){
        salarioFinal = (salarioAtual * 0.25) + salarioAtual + 500;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    
    if (500 < salarioAtual <= 1000 && tempServ == -1){
        salarioFinal = (salarioAtual * 0.2) + salarioAtual;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (500 < salarioAtual <= 1000 && 1 <= tempServ <= 3){
        salarioFinal = (salarioAtual * 0.2) + salarioAtual + 100;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (500 < salarioAtual <= 1000 && 4 <= tempServ <= 6){
        salarioFinal = (salarioAtual * 0.2) + salarioAtual + 200;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (500 < salarioAtual <= 1000 && 7 <= tempServ <= 10){
        salarioFinal = (salarioAtual * 0.2) + salarioAtual + 300;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (500 < salarioAtual <= 1000 && tempServ > 10){
        salarioFinal = (salarioAtual * 0.2) + salarioAtual + 500;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    
    if (1000 < salarioAtual <= 1500 && tempServ == -1){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1000 < salarioAtual <= 1500 && 1 <= tempServ <= 3){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 100;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1000 < salarioAtual <= 1500 && 4 <= tempServ <= 6){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 200;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1000 < salarioAtual <= 1500 && 7 <= tempServ <= 10){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 300;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1000 < salarioAtual <= 1500 && tempServ > 10){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 500;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }

    if (1500 < salarioAtual <= 2000 && tempServ == -1){
        salarioFinal = (salarioAtual * 0.10) + salarioAtual;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1500 < salarioAtual <= 2000 && 1 <= tempServ <= 3){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 100;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1500 < salarioAtual <= 2000 && 4 <= tempServ <= 6){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 200;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1500 < salarioAtual <= 2000 && 7 <= tempServ <= 10){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 300;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (1500 < salarioAtual <= 2000 && tempServ > 10){
        salarioFinal = (salarioAtual * 0.15) + salarioAtual + 500;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }

    if (salarioAtual > 2000 && tempServ == -1){
        salarioFinal = salarioAtual;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual > 2000 && 1 <= tempServ <= 3){
        salarioFinal = salarioAtual + 100;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual > 2000 && 4 <= tempServ <= 6){
        salarioFinal = salarioAtual + 200;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual > 2000 && 7 <= tempServ <= 10){
        salarioFinal = salarioAtual + 300;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
    else if (salarioAtual > 2000 && tempServ > 10){
        salarioFinal = salarioAtual + 500;
        printf("Seu novo salario e: R$ %.2f", salarioFinal);
    }
}