#include <stdio.h>
#include <ctype.h>

int main() {
    int cont[3][3] = {0};
    int totalElevador[3] = {0};
    int totalPeriodo[3] = {0};
    char elevadores[3] = {'A', 'B', 'C'};
    char periodos[3] = {'M', 'V', 'N'};
    char elevador, periodo;
    int i, e, p;
    int linha, coluna;
    int maiorPeriodo, menorPeriodo, elevadorDoPeriodo;
    int maiorElevador, menorElevador, medioElevador, periodoDoElevador;
    float difPercentual, percMedio;

    for (i = 1; i <= 50; i++) {
        printf("\nMorador %d\n", i);

        printf("Elevador mais usado (A, B ou C): ");
        scanf(" %c", &elevador);
        elevador = toupper(elevador);
        while (elevador != 'A' && elevador != 'B' && elevador != 'C') {
            printf("Elevador invalido! Digite A, B ou C: ");
            scanf(" %c", &elevador);
            elevador = toupper(elevador);
        }

        printf("Periodo (M, V ou N): ");
        scanf(" %c", &periodo);
        periodo = toupper(periodo);
        while (periodo != 'M' && periodo != 'V' && periodo != 'N') {
            printf("Periodo invalido! Digite M, V ou N: ");
            scanf(" %c", &periodo);
            periodo = toupper(periodo);
        }

        if (elevador == 'A') {
            linha = 0;
        } else if (elevador == 'B') {
            linha = 1;
        } else {
            linha = 2;
        }

        if (periodo == 'M') {
            coluna = 0;
        } else if (periodo == 'V') {
            coluna = 1;
        } else {
            coluna = 2;
        }

        cont[linha][coluna]++;
        totalElevador[linha]++;
        totalPeriodo[coluna]++;
    }

    maiorPeriodo = 0;
    for (p = 1; p < 3; p++) {
        if (totalPeriodo[p] > totalPeriodo[maiorPeriodo]) {
            maiorPeriodo = p;
        }
    }
    elevadorDoPeriodo = 0;
    for (e = 1; e < 3; e++) {
        if (cont[e][maiorPeriodo] > cont[elevadorDoPeriodo][maiorPeriodo]) {
            elevadorDoPeriodo = e;
        }
    }
    printf("\n===== RESULTADOS =====\n");
    printf("Periodo mais usado: %c (%d usos), elevador %c\n",
           periodos[maiorPeriodo], totalPeriodo[maiorPeriodo], elevadores[elevadorDoPeriodo]);

    maiorElevador = 0;
    for (e = 1; e < 3; e++) {
        if (totalElevador[e] > totalElevador[maiorElevador]) {
            maiorElevador = e;
        }
    }
    periodoDoElevador = 0;
    for (p = 1; p < 3; p++) {
        if (cont[maiorElevador][p] > cont[maiorElevador][periodoDoElevador]) {
            periodoDoElevador = p;
        }
    }
    printf("Elevador mais frequentado: %c (%d usos), maior fluxo no periodo %c\n",
           elevadores[maiorElevador], totalElevador[maiorElevador], periodos[periodoDoElevador]);

    menorPeriodo = 0;
    for (p = 1; p < 3; p++) {
        if (totalPeriodo[p] < totalPeriodo[menorPeriodo]) {
            menorPeriodo = p;
        }
    }
    difPercentual = (totalPeriodo[maiorPeriodo] - totalPeriodo[menorPeriodo]) * 100.0 / 50;
    printf("Diferenca percentual entre o horario mais usado e o menos usado: %.2f%%\n", difPercentual);

    if (maiorElevador == 0) {
        menorElevador = 1;
    } else {
        menorElevador = 0;
    }
    for (e = 0; e < 3; e++) {
        if (e != maiorElevador && totalElevador[e] < totalElevador[menorElevador]) {
            menorElevador = e;
        }
    }
    medioElevador = 3 - maiorElevador - menorElevador;
    percMedio = totalElevador[medioElevador] * 100.0 / 50;
    printf("Elevador de media utilizacao: %c, com %.2f%% do total de servicos\n",
           elevadores[medioElevador], percMedio);

    return 0;
}
