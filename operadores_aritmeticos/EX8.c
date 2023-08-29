#include<stdio.h>
#include<math.h>
#include<time.h>

main(){
    struct tm *data_atual; // estrutura para dizer a data atual

    time_t segundos;

    time(&segundos);

    data_atual = localtime(&segundos);

    int diaNascimento, mesNascimento, anoNascimento; // variáveis para receber da data de nascimento do usuário
    int diaAtual, mesAtual, anoAtual; // variáveis para reber a data atual 
    int diaSub, mesSub, anoSub; // variaveis para receber a subtração da data atual e de nascimento
    int diasTotal, mesTotal, diasVida; // variaveis para reberem os valores finais do total de dias de vida

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &diaNascimento);

    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &mesNascimento);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    diaAtual = data_atual -> tm_mday;
    mesAtual = data_atual -> tm_mon+1;
    anoAtual = data_atual -> tm_year+1900;

    // Dia, mês e ano atual - dia, mês e ano de nascimento do usuário
    diaSub = diaAtual - diaNascimento;
    mesSub = mesAtual - mesNascimento;
    anoSub = (anoAtual - anoNascimento) * 365;

    if (diaSub < 0 && mesSub < 0) // decisão caso as subtrações entre os dias e meses der negativo
    {
        diasTotal = diaSub + 30;
        mesTotal = (mesSub + 12) * 30;
        diasVida = diasTotal + mesTotal + anoSub;

        printf("Sua idade em dias e: %d", diasVida);
    }
    else{ // decisão caso as subtrações de dias e meses de positivo
        diasTotal = diaSub;
        mesTotal = mesSub * 30;
        diasVida = diasTotal + mesTotal + anoSub;

        printf("Sua idade em dias e: %d", diasVida);
    }

    return 0;
}
