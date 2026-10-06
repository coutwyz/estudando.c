#include <stdio.h>

int main() {
    float valor, percentual, desconto, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    if (valor <= 100) {
        percentual = 0;
    } else if (valor <= 500) {
        percentual = 5;
    } else {
        percentual = 10;
    }

    desconto = valor * percentual / 100;
    valorFinal = valor - desconto;

    printf("Valor original: R$ %.2f\n", valor);
    printf("Percentual de desconto: %.0f%%\n", percentual);
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
