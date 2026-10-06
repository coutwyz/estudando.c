#include <stdio.h>
#include <ctype.h>

int main() {
    int i, idade;
    char nota;
    int qtdA = 0, qtdB = 0, qtdC = 0, qtdD = 0, qtdE = 0;
    int somaIdadeD = 0;
    int maiorIdadeA = 0, maiorIdadeD = 0, maiorIdadeE = 0;
    float percB, percC, difPercentual, mediaIdadeD, percE;
    int difIdade;

    for (i = 1; i <= 100; i++) {
        printf("\nEspectador %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);

        printf("Nota (A, B, C, D ou E): ");
        scanf(" %c", &nota);
        nota = toupper(nota);

        while (nota != 'A' && nota != 'B' && nota != 'C' && nota != 'D' && nota != 'E') {
            printf("Nota invalida! Digite A, B, C, D ou E: ");
            scanf(" %c", &nota);
            nota = toupper(nota);
        }

        if (nota == 'A') {
            qtdA++;
            if (idade > maiorIdadeA) {
                maiorIdadeA = idade;
            }
        } else if (nota == 'B') {
            qtdB++;
        } else if (nota == 'C') {
            qtdC++;
        } else if (nota == 'D') {
            qtdD++;
            somaIdadeD = somaIdadeD + idade;
            if (idade > maiorIdadeD) {
                maiorIdadeD = idade;
            }
        } else {
            qtdE++;
            if (idade > maiorIdadeE) {
                maiorIdadeE = idade;
            }
        }
    }

    printf("\n===== RESULTADOS =====\n");

    printf("Quantidade de respostas otimo: %d\n", qtdA);

    percB = qtdB * 100.0 / 100;
    percC = qtdC * 100.0 / 100;
    if (percB > percC) {
        difPercentual = percB - percC;
    } else {
        difPercentual = percC - percB;
    }
    printf("Diferenca percentual entre bom e regular: %.2f%%\n", difPercentual);

    if (qtdD > 0) {
        mediaIdadeD = (float) somaIdadeD / qtdD;
        printf("Media de idade de quem respondeu ruim: %.2f\n", mediaIdadeD);
    } else {
        printf("Ninguem respondeu ruim.\n");
    }

    percE = qtdE * 100.0 / 100;
    printf("Percentual de respostas pessimo: %.2f%%\n", percE);
    if (qtdE > 0) {
        printf("Maior idade que respondeu pessimo: %d\n", maiorIdadeE);
    } else {
        printf("Ninguem respondeu pessimo.\n");
    }

    if (maiorIdadeA > maiorIdadeD) {
        difIdade = maiorIdadeA - maiorIdadeD;
    } else {
        difIdade = maiorIdadeD - maiorIdadeA;
    }
    printf("Diferenca entre a maior idade de otimo e a maior idade de ruim: %d\n", difIdade);

    return 0;
}
