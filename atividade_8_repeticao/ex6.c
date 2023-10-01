#include <stdio.h>

int main() {
    char continuar;
    
    do {
        int ano, mes, dias, bissexto;

        printf("\nDigite o ano (exemplo: 2023): ");
        scanf("%d", &ano);
        printf("\nDigite o mes (1 a 12): ");
        scanf("%d", &mes);

        bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);

        switch (mes) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                dias = 31;
                break;
            case 4: case 6: case 9: case 11:
                dias = 30;
                break;
            case 2:
                dias = bissexto ? 29 : 28;
                break;
            default:
                printf("\nMes invalido!\n");
                continue; 
        }

        printf("\n-> O mes %d/%d tem %d dias.\n", mes, ano, dias);

        printf("Voce deseja outra fazer outra entrada (S/?)? ");
        scanf(" %c", &continuar);
        fflush(stdin);

    } while (continuar == 'S' || continuar == 's');
}
