#include<stdio.h>
#include<string.h>

main(){
    int codcity, maiorcod, menorcod, numveiculos, contador = 0;
    int acidentes, maiorAcidentes = 0, menorAcidentes = 100, veiculosTotal = 0, mediaVeiculos;
    int acidentesRS = 0, mediaAcidentesRs = 0, rs = 0;
    char opcao, estado[3], maiorEstado[3], menorEstado[3];

    do
    {
        contador++;
        printf("\n-------------->REGISTRO NUMERO %d<--------------", contador);

        printf("\n\n-> Digite o codigo da cidade (DDD): ");
        scanf("%d", &codcity);

        printf("-> Informe o estado da cidade (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);
        fflush(stdin);

        printf("-> Numero de veiculos de passeio em 1992: ");
        scanf("%d", &numveiculos);

        printf("-> Numero de acidentes de transito com vitimas em 1992: ");
        scanf("%d", &acidentes);
        fflush(stdin);

        if (maiorAcidentes < acidentes){
            maiorcod = codcity;
            maiorAcidentes = acidentes;
            strcpy(maiorEstado, estado);
        }
        if (menorAcidentes > acidentes){
            menorAcidentes = acidentes;
            menorcod = codcity;
            strcpy(menorEstado, estado);
        }

        if (codcity >= 51 && codcity <= 55){
            acidentesRS += acidentes;
            rs ++;
        }

        veiculosTotal += numveiculos;

        printf("\n# Continuar registros? s/n: ");
        scanf("%c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    mediaVeiculos = veiculosTotal / contador;

    mediaAcidentesRs = acidentesRS / rs;

    printf("\n--------------------------->RELATORIO<---------------------------");
    printf("\n\na) O maior indice de acidentes de transito eh: %d, e o cod eh: %d, e o estado eh: %s", maiorAcidentes, maiorcod, maiorEstado);
    printf("\n   O menor indice de acidentes de transito eh: %d, o codigo da cidade eh: %d, e o estado eh: %s", menorAcidentes, menorcod, menorEstado);

    printf("\n\nb) A media de veiculos nas cidades brasileiras em 1992: %d", mediaVeiculos);

    printf("\n\nc) A media de acidentes com vitimas entre as cidades do Rio Grande do Sul em 1992 eh: %d", mediaAcidentesRs);
}
