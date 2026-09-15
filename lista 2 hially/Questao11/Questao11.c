#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double preco, valorFinal;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%lf", &preco);

    printf("Escolha a condicao de pagamento:\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
    printf("3 - Duas parcelas, sem juros\n");
    printf("4 - Duas parcelas, com 10%% de acrescimo\n");
    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valorFinal = preco - (preco * 0.10);
    } else if (codigo == 2) {
        valorFinal = preco - (preco * 0.15);
    } else if (codigo == 3) {
        valorFinal = preco;
    } else if (codigo == 4) {
        valorFinal = preco + (preco * 0.10);
    } else {
        printf("Codigo invalido.\n");
        return 0;
    }

    printf("O valor final a pagar e: R$ %.2lf\n", valorFinal);

    return 0;
}
