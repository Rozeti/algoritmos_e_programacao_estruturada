#include <stdio.h>

char Sexo() {
    char sexo;
    printf("\n--> Sexo (M - para Masculino ou F - para Feminino): ");
    fflush(stdin);
    scanf(" %c", &sexo);
    fflush(stdin);

    while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
        printf("# Valor invalido invalido. Informe um valor valido (M - para Masculino ou F - para Feminino): ");
        scanf(" %c", &sexo);
    }
    return sexo;
}

float Salario() {
    float salario;
    printf("--> Salario: R$ ");
    scanf("%f", &salario);
    return salario;
}

int validaSalario(float salario) {
    return salario > 1.0;
}

void situacaoSalarial(float salario) {
    
    if (salario < 1400.0) {
        printf("\n\n---> Situacao do salario: Abaixo do salario minimo\n");
    } else if (salario == 1400.0) {
        printf("\n\n---> Situacao do salario: Igual ao salario minimo\n");
    } else {
        printf("\n\n---> Situacao do salario: Acima do salario minimo\n");
    }
}

void mostrarCadastroFuncionario(float salario, char sexo) {
    printf("---> Salario: R$ %.2f\n", salario);
    if (sexo == 'M' || sexo == 'm'){
        printf("---> Sexo: Masculino\n");
    }else if (sexo == 'F' || sexo == 'f'){
        printf("---> Sexo: Feminino\n");
    }
}

void mostraQuantidade(int abaixoSalarioMinimo, int acimaSalarioMinimo) {
    printf("\n-----> Relatorio de quantidade <-----\n");
    printf("---> Quantidade de empregados com salario abaixo do minimo: %d\n", abaixoSalarioMinimo);
    printf("---> Quantidade de empregados com salario acima do minimo: %d\n", acimaSalarioMinimo);
    printf("** Sistema encerrado!");
    printf("\n\n");
}

main() {
    int menorSalarioMinimo = 0;
    int maiorSalarioMinimo = 0;
    char opcao;

    printf("\n-----> Cadastro de funcionarios <-----\n");

    do {
        printf("\n--> Voce possui carteira de trabalho assinada (s - para SIM ou n - para NAO): ");
        scanf(" %c", &opcao);
        fflush(stdin);
        while (opcao != 's' && opcao != 'n') {
                printf("# Valor invalido! Informe s - para SIM ou n - para NAO: ");
                scanf(" %c", &opcao);
                fflush(stdin);
            }

        if (opcao == 's') {
            char sexo = Sexo();
            float salario = Salario();

            while (!validaSalario(salario)) {
                printf("# Valor invalido. Digite um valor maior que R$1,00: ");
                salario = Salario();
            }

            situacaoSalarial(salario);

            mostrarCadastroFuncionario(salario, sexo);

            if (salario < 1400.00) {
                menorSalarioMinimo++;
            } else if (salario > 1400.0) {
                maiorSalarioMinimo++;
            }

            printf("\nDeseja realizar outro cadastro (s - para SIM ou n - para NAO): ");
            scanf(" %c", &opcao);

            while (opcao != 's' && opcao != 'n') {
                printf("# Valor invalido! Informe s - para SIM ou n - para NAO: ");
                scanf(" %c", &opcao);
            }
        } else if (opcao == 'n') {
            printf("** Necessario possuir carteira de trabalho assinada para realizar o cadastro!\n");
        } else {
            printf("# Opcao invalida\n");
        }
    } while (opcao == 's');

    if (menorSalarioMinimo + maiorSalarioMinimo > 0) {
        mostraQuantidade(menorSalarioMinimo, maiorSalarioMinimo);
    }
}
