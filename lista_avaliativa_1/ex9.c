#include<stdio.h>

main(){
    int voto, contador = 1;
    int totalVotos1 = 0, totalVotos2 = 0, totalVotos3 = 0, totalVotos4 = 0, totalVotos5 = 0, totalVotos6 = 0;

    printf("-->Para finalizar a votacao informe o valor 0 como voto<--");
    
    do
    {   printf("\n\n------------> Votacao numero %d<-------------", contador);

        printf("\n#Escolha e vote no seu candidato a presidente (Digite o codigo referente a ele):\n-> Getulio Vargas - 1 \n-> Jucelino Kubitchek - 2 \n-> Fernando Henrique Cardoso - 3 \n-> Janio Quadros - 4");
        printf("\n\n-> Para votar NULO digite 5 ou para votar em BRANCO digite 6.\n");
        printf("\n--> Seu voto: ");
        scanf("%d", &voto);

        while (voto > 6 || voto < 0){
            printf("\nCodigo invalido! Por favor digite o codigo referente a um dos candidatos ou informe os valores para votar em branco ou anular: ");
            scanf("%d", &voto);
        }
        
        if (voto == 1){
            totalVotos1++;
        }else if (voto == 2){
            totalVotos2++;
        }else if (voto == 3){
            totalVotos3++;
        }else if (voto == 4){
            totalVotos4++;
        }else if (voto == 5){
            totalVotos5++;
        }else if (voto == 6){
            totalVotos6++;
        }
        contador++;


    } while (voto >= 1);

    printf("\n------------> Total da Votacao<-------------");

    printf("\n\n-->O total de votos para cada canditdato eh: \n-> Getulio Vargas: %d \n-> Jucelino Kubitchek: %d \n-> Fernando Henrique Cardoso: %d \n-> Janio Quadros: %d", totalVotos1, totalVotos2, totalVotos3, totalVotos4);
    printf("\n\n--> O total de votos NULO foram: %d\n--> O total de votos em BRANCO foram: %d", totalVotos5, totalVotos6);
    
}
