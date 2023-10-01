#include<stdio.h>

main(){
    int num[6];

    for (int i = 0; i < 6; i++){
        printf("\n-> Digite qualquer numero: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 6; i++){
        printf("\n-> Os valores digitados foram: %d", num[i]);
    }
}