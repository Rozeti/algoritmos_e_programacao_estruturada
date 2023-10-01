#include <stdio.h>

main() {
    int contador, num, t1 = 0, t2 = 1, proximoTermo;

    printf("-> Qual posicao da sequencia de Fibonacci voce quer ver: ");
    scanf("%d", &num);

    for (contador = 1; contador <= num; contador++){
        printf("\n-> Posicao: %d - Valor na sequencia de Fibonacci: %d", contador, t1);
        proximoTermo = t1 + t2;//para achar o proximo valor da sequencia precisa somar os dois termos anteriores
        t1 = t2; //tendo feito a soma dos termos anteriores, o t1 terá que mudar, armazenando agora o valor de t2
        t2 = proximoTermo;//e o t2 tera que armazenar o valor encontrado após a soma, pois esse novo termo juntamente com o seu anterior que na sequencia diz respeito ao que estava armazenado no t2 e agora foi armazenado no t1 serão somados dando o valor do proximo termo na sequencia

        //EX: t1 = 0 e t2 = 1 => 0+1 = 1 => a sequencia fica 0, 1, 1 e para achar o próximo termo os valores de t1 e t2 terão que mudar pois na soma temos que ter os dois valores anteriores do valor que queremo encontrar => t1 = 1 e t2 = 1 => 1 + 1 => 2 => (sequencia) 0, 1, 1, 2 => t1 = 1 e t2 = 2 => 1 + 2 = 3...
    }
}