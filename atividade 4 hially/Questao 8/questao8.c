#include <stdio.h>

int main() {
    int mes, ano, dias;
    char resposta;

    do {
        printf("\nDigite o mes (1 a 12): ");
        scanf("%d", &mes);
        while (mes < 1 || mes > 12) {
            printf("Mes invalido! Digite de 1 a 12: ");
            scanf("%d", &mes);
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);
        while (ano <= 0) {
            printf("Ano invalido! Digite um ano positivo: ");
            scanf("%d", &ano);
        }

        if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                dias = 29;
            } else {
                dias = 28;
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            dias = 30;
        } else {
            dias = 31;
        }

        printf("O mes %d/%d tem %d dias.\n", mes, ano, dias);

        printf("\nVOCE DESEJA OUTRAS ENTRADAS (S/N)? ");
        scanf(" %c", &resposta);
    } while (resposta == 'S' || resposta == 's');

    return 0;
}
