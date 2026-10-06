#include <stdio.h>

int main() {
    int entrada, saida, horas;
    float valor;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &entrada);
    printf("Digite a hora de saida (0 a 23): ");
    scanf("%d", &saida);

    if (saida >= entrada) {
        horas = saida - entrada;
    } else {
        horas = saida + 24 - entrada;
    }

    if (horas <= 1) {
        valor = 10;
    } else {
        valor = 10 + (horas - 1) * 5;
    }

    printf("Tempo de permanencia: %d hora(s)\n", horas);
    printf("Valor total: R$ %.2f\n", valor);

    return 0;
}
