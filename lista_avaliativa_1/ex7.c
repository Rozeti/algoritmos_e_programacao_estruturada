#include<stdio.h>

main(){
    float nota1, nota2, nota3, mediaAluno = 0, mediaGeral = 0, mediaSala = 0;
    int contador = 1;
    char opcao;

    printf("\n-> A TURMA QUE VOCE ESTA CADASTRANDO POSSUI 30 ALUNO <-");
    do
    {
        printf("\n\n<---------------Aluno %d------------>", contador);
        printf("\n-> Digite a nota da sua primeira prova: ");
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10){
            printf("-> #Valor invalido! Por favor digite uma nota entre 0 a 10: ");
            scanf("%f", &nota1);
        }
        
    
        printf("\n-> Digite a nota da sua segunda prova: ");
        scanf("%f", &nota2);
        while (nota2 < 0 || nota2 > 10){
            printf("-> #Valor invalido! Por favor digite uma nota entre 0 a 10: ");
            scanf("%f", &nota2);
        }

        printf("\n-> Digite a nota da sua terceira prova: ");
        scanf("%f", &nota3);
        fflush(stdin);
        while (nota3 < 0 || nota3 > 10){
            printf("-> #Valor invalido! Por favor digite uma nota entre 0 a 10: ");
            scanf("%f", &nota3);
            fflush(stdin);
        }
        mediaAluno = ((nota1 *2) + (nota2 * 4) + (nota3 * 3)) / 10;
        if (mediaAluno >= 7.00){
            printf("\n--> Sua media ponderada eh: %.2f. Voce esta APROVADO", mediaAluno);
        }else{
            printf("\n--> Sua media ponderada eh: %.2f. Voce esta REPROVADO", mediaAluno);
        }
        
        printf("\n\nDeseja continuar listando as notas (s- para sim ou n- para nao): ");
        scanf("%c", &opcao);
        contador++;
        mediaGeral += mediaAluno;
    } while (opcao != 'n' && opcao != 'N');

    mediaSala = mediaGeral / 30;
    printf("\n--> A media geral da sala eh: %.2f", mediaSala);
}
