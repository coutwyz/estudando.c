#include <stdio.h>

int main() {
    char produto[50];
    int quantidade;
    float preco, total;

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", produto);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Digite o preco unitario: ");
    scanf("%f", &preco);

    total = quantidade * preco;

    printf("Produto: %s\n", produto);
    printf("Valor total da compra: R$ %.2f\n", total);

    return 0;
}
