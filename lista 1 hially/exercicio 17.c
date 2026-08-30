#include <stdio.h>

int main() {
    float salario, cheque1, cheque2;
    float taxa1, taxa2, saldo;

    printf("Digite o salario depositado: ");
    scanf("%f", &salario);

    printf("Digite o valor do primeiro cheque: ");
    scanf("%f", &cheque1);

    printf("Digite o valor do segundo cheque: ");
    scanf("%f", &cheque2);

    taxa1 = cheque1 * 0.38 / 100;
    taxa2 = cheque2 * 0.38 / 100;

    saldo = salario - cheque1 - taxa1 - cheque2 - taxa2;

    printf("Saldo atual: R$ %.2f\n", saldo);

    return 0;
}
