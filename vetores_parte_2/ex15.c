#include<stdio.h>

main(){
    int vetor[20];

    for (int i = 0; i < 20; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 20; i++){
        for (int j = 1; j < 20; j++){
            if (vetor[i] == vetor[j]){
                int repetido = 0;
                for(int k = 0; k < i; k++){
                    if (vetor[i] == vetor[k]){
                        repetido = 1;
                        break;
                    }
                }
                if (!repetido){
                    printf("\n-> %d", vetor[i]);
                }
                break;
            }   
        }
    }
}

/* -> tentei, deu certo mas não consegui tirar os que se repetem então copiei o da prof
#include<stdio.h>

main(){
    int vetor[10], vetor2[10], contador = 0, contador2 = 0;

    for (int i = 0; i < 10; i++){
        printf("-> Digite os numeros: ");
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if (vetor[i] == vetor[j]){
                vetor[i] = 0; 
            }
        }
    }
    
    printf("\n\n");

    do{
        if (vetor[contador] != 0){
            vetor2[contador2] = vetor[contador];
            contador2++;
        }
        contador++;
    } while (contador < 10);

    for (int i = 0; i < 10; i++){
        printf("\n-> Vetor sem repeticao: %d", vetor2[i]);
    }
}
*/
