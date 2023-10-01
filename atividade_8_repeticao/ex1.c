#include<stdio.h>
#include<math.h>

main(){
    int idade, opcao = 1, quantidadeA = 0, quantidadeB = 0, quantidadeC = 0, quantidadeD = 0, quantidadeE = 0, contador = 0;
    int diferencaPercentual, idadeNotaRuim = 0;
    float mediaIdadeNotaRuim;
    int maiorIdadePessimo = 0, percentNotaPessimo;
    int maiorIdadeOtimo = 0, maiorIdadeRuim = 0, diferencaIdades;
    char nota;

    do{
        contador++;
        printf("\n-------> VOTACAO %d ", contador);

        printf("\n-> Informe sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);

        printf("\n-> De uma nota de A a E, para o filme (sendo A- Otimo e E- Pessimo): ");
        scanf("%c", &nota);
        while ((nota != 'a' && nota != 'A') && (nota != 'b' && nota != 'B') && (nota != 'c' && nota != 'C') && (nota != 'd' && nota != 'D') && (nota != 'e' && nota != 'E')){
            printf("Valor invalido! Por favor digite uma nota de A a E: ");
            scanf("%c", &nota);
        }
        
        if (nota == 'a' || nota == 'A'){
            quantidadeA ++;
            if (idade > maiorIdadeOtimo){
                maiorIdadeOtimo = idade;
            }
        }else if (nota == 'b' || nota == 'B'){
            quantidadeB ++;
        }else if (nota == 'c' || nota == 'C'){
            quantidadeC ++;
        }else if (nota == 'd' || nota == 'D'){
            quantidadeD ++;
            idadeNotaRuim += idade;
            if (idade > maiorIdadeRuim){
                maiorIdadeRuim = idade;
            }
        }else if (nota == 'e' || nota == 'E'){
            quantidadeE ++;
            if (idade > maiorIdadePessimo){
                maiorIdadePessimo = idade;
            }
        }

        printf("\n-> Continuar votando? 1- sim 0- nao: ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    diferencaPercentual = quantidadeB - quantidadeC;
    if (diferencaPercentual < 0){
        diferencaPercentual *= -1;
    }

    mediaIdadeNotaRuim = idadeNotaRuim / quantidadeD;

    percentNotaPessimo = (quantidadeE * 100) / 100;

    diferencaIdades = maiorIdadeOtimo - maiorIdadeRuim;
    if (diferencaIdades < 0){
        diferencaIdades *= -1;
    }
    
    printf("\n--> A quantidade de respostas Otimo foram: %d", quantidadeA);
    printf("\n--> A diferenca percentual entre as respostas Bom e Ruim eh: %d%%", diferencaPercentual);
    printf("\n--> A media de idade das pessoas que responderam Ruim eh: %.2f", mediaIdadeNotaRuim);
    printf("\n--> A percentagem de respostas Pessimo eh: %d%%, e a maior idade que usou essa opcao eh: %d", percentNotaPessimo, maiorIdadePessimo);
    printf("\n--> A diferenca entre as maiores idades que votaram Otimo e Ruim eh: %d", diferencaIdades);   
}