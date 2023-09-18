#include<stdio.h>

main(){
    int sexo, olho, cabelo, idade = 0, contador = 0, porcentagem, etapa = 1;
    float salario;

    printf("--> PARA FINALIZAR A PESQUISA FORNECA COMO IDADE DE UM HABITANTE FICTICIO O VALOR -1 <--");
    do
    {
        printf("\n\n<---------------------CADASTRO %d----------------------->", etapa);
        printf("\na) Informe o sexo 1- para masculino ou 2- para feminino: ");
        scanf("%d", &sexo);
        while (sexo != 1 && sexo != 2){
            printf("#Valor invalido! Por favor digite 1- para masculino ou 2- para feminino: ");
            scanf("%d", &sexo);
        }
        
        printf("b) Informe a cor dos olhor 1- azuis / 2- verdes / 3- castanhos / 4- pretos: ");
        scanf("%d", &olho);
        while (olho != 1 && olho != 2 && olho != 3 && olho != 4){
            printf("#Valor invalido! Por favor digite 1- azuis / 2- verdes / 3- castanhos / 4- pretos: ");
            scanf("%d", &olho);
        }

        printf("c) Informe a cor dos cabelos 1- loiros / 2- castanhos / 3- pretos / 4- ruivos: ");
        scanf("%d", &cabelo);
        while (cabelo != 1 && cabelo != 2 && cabelo != 3 && cabelo != 4){
            printf("#Valor invalido! Por favor digite 1- loiros / 2- castanhos / 3- pretos / 4- ruivos: ");
            scanf("%d", &cabelo);
        }

        printf("d) Informe a idade da pessoa em anos, entre 10 a 100 anos: ");
        scanf("%d", &idade);
        while (idade != -1 && (idade < 10 || idade > 100)){
            printf("#valor invalido! Por favor digite uma idade entre 10 a 100 anos: ");
            scanf("%d", &idade);
        }

        printf("e) Informe o salario atual da pessoa: R$ ");
        scanf("%f", &salario);
        while (salario < 0){
            printf("#valor invalido! Por favor informe um valor de salario positivo: ");
            scanf("%f", &salario);
        }
        etapa ++;
        contador ++;

        if (sexo == 2 && olho == 3 && cabelo == 2 && (idade >= 18 || idade <= 35)){
            porcentagem ++;
        }
    } while (idade >= 0);

    porcentagem = (porcentagem * 100) / (contador - 1);
    printf("A porcentagem de pessoas do sexo feminino, com idade entre 18 e 35 anos e que tenham olhos castanhos e cabelos castanhos que participaram da pesquisa eh: %d%%", porcentagem);
}
