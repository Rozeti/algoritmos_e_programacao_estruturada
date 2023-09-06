#include<stdio.h>

main(){

    int prato, bebida, sobremesa, valorCalorias;

    printf("\n<------------Menu---------------->\n");

    printf("->Pratos:");

    printf("\n1 - Vegetariano");
    printf("\n2 - Peixe");
    printf("\n3 - Frango");
    printf("\n4 - Carne");
    printf("\n-> Escolha um prato: ");
    scanf("%d", &prato);

    switch (prato)
    {
    case 1: 
        valorCalorias = 180;
        break;
    case 2: 
        valorCalorias = 230;
        break;
    case 3: 
        valorCalorias = 250;
        break;
    case 4: 
        valorCalorias = 350;
        break;
    }

    printf("\n<-------------------------------------->\n");

    printf("->Bebidas:");

    printf("\n1 - Cha");
    printf("\n2 - Suco de Laranja");
    printf("\n3 - Suco de Melao");
    printf("\n4 - Refrigerante diet");
    printf("\n-> Escolha uma bebida: ");
    scanf("%d", &bebida);

    switch (bebida){
    case 1: 
        valorCalorias = valorCalorias + 20;
        break;
    case 2: 
        valorCalorias = valorCalorias + 70;
        break;
    case 3: 
        valorCalorias = valorCalorias + 100;
        break;
    case 4: 
        valorCalorias = valorCalorias + 65;
        break;
    }

    printf("\n<-------------------------------------->\n");

    printf("->Sobremesa:");

    printf("\n1 - Abacaxi");
    printf("\n2 - Sorvete diet");
    printf("\n3 - Mousse diet");
    printf("\n4 - Mousse chocolate");
    printf("\n-> Escolha uma sobremesa: ");
    scanf("%d", &sobremesa);

    switch (sobremesa){
    case 1: 
        valorCalorias = valorCalorias + 75;
        break;
    case 2: 
        valorCalorias = valorCalorias + 110;
        break;
    case 3: 
        valorCalorias = valorCalorias + 170;
        break;
    case 4: 
        valorCalorias = valorCalorias + 200;
        break;
    }

    printf("\n<------------Total de Calorias---------------->\n");

    printf("\n-> A quantidade de calorias do sua refeicao sera: %d cal", valorCalorias);
}