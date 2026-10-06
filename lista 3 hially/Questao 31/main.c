#include <stdio.h>

int main() {
    float litros, preco, bruto, percentual, desconto, valorFinal;

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);
    printf("Digite o preco do litro: ");
    scanf("%f", &preco);

    bruto = litros * preco;

    if (litros < 20) {
        percentual = 0;
    } else if (litros <= 40) {
        percentual = 3;
    } else {
        percentual = 5;
    }

    desconto = bruto * percentual / 100;
    valorFinal = bruto - desconto;

    printf("Valor bruto: R$ %.2f\n", bruto);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
