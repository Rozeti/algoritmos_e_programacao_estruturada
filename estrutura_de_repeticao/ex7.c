#include<stdio.h>

main(){

    char sexo, olho, cabelo;
    int idade = 0, contador = 0, porcentagem = 0, etapa = 1;
    float salario;

    printf("--> PARA FINALIZAR A PESQUISA FORNECA COMO IDADE DE UM HABITANTE FICTICIO O VALOR -1 <--");
    do{
        fflush(stdin);
        printf("\n\n<---------------------CADASTRO %d----------------------->", etapa);
        printf("\na) Informe o sexo m- para masculino ou f- para feminino: ");
        scanf("%c", &sexo);
        fflush(stdin);
        while (sexo != 'm' && sexo != 'f'){//validação do sexo
            printf("#Valor invalido! Por favor digite m- para masculino ou f- para feminino: ");
            scanf("%c", &sexo);
            fflush(stdin);
        }
        
        printf("b) Informe a cor dos olhor a- azuis / v- verdes / c- castanhos / p- pretos: ");
        scanf("%c", &olho);
        fflush(stdin);
        while (olho != 'a' && olho != 'v' && olho != 'c' && olho != 'p'){//validação da cor dos olhos
            printf("#Valor invalido! Por favor digite a- azuis / v- verdes / c- castanhos / p- pretos: ");
            scanf("%c", &olho);
            fflush(stdin);
        }

        printf("c) Informe a cor dos cabelos l- loiros / c- castanhos / p- pretos / r- ruivos: ");
        scanf("%c", &cabelo);
        fflush(stdin);
        while (cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r'){//validação da cor dos olhos
            printf("#Valor invalido! Por favor digite l- loiros / c- castanhos / p- pretos / r- ruivos: ");
            scanf("%c", &cabelo);
            fflush(stdin);
        }

        printf("d) Informe a idade da pessoa em anos, entre 10 a 100 anos: ");
        scanf("%d", &idade);
        while (idade != -1 && (idade < 10 || idade > 100)){//validação da idade
            printf("#valor invalido! Por favor digite uma idade entre 10 a 100 anos: ");
            scanf("%d", &idade);
        }

        printf("e) Informe o salario atual da pessoa: R$ ");
        scanf("%f", &salario);
        while (salario < 0){//validação do salário
            printf("#valor invalido! Por favor informe um valor de salario positivo: ");
            scanf("%f", &salario);
        }
        etapa ++;
        contador ++;

        if (sexo == 'f' && olho == 'c' && cabelo == 'c' && idade > 18 && idade < 35){
            porcentagem ++;
        }
    } while (idade >= 0);
    
    porcentagem = (porcentagem * 100) / (contador - 1);// calculo da porcentagem das características específicas
    contador --; //quantidade de cadastros realizados, descontando o cadastro ficticio para finalizar o processo
    printf("\n-> A quantidade de pessoas que participaram da pesquisa eh igual a: %d", contador);
    printf("\n-> Sendo a porcentagem de pessoas do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos que participaram da pesquisa eh: %d%%", porcentagem);
}
