#include <stdio.h>

int main() {
    float deposito, taxa, rendimento, total;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    rendimento = deposito * (taxa / 100);
    total = deposito + rendimento;

    printf("Valor do rendimento: R$ %.2f\n", rendimento);
    printf("Valor total: R$ %.2f\n", total);

    return 0;
}
