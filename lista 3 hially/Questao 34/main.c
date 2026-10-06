#include <stdio.h>

int main() {
    char produto[50];
    int quantidade, continuar;
    int numVendas = 0;
    int totalProdutos = 0;
    float preco, totalVenda;
    float faturamento = 0;
    float maiorVenda = 0;

    printf("Deseja registrar uma venda? (1 - Sim, 0 - Nao): ");
    scanf("%d", &continuar);

    while (continuar == 1) {
        printf("Nome do produto: ");
        scanf(" %[^\n]", produto);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Preco unitario: ");
        scanf("%f", &preco);

        totalVenda = quantidade * preco;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        numVendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("\nDeseja registrar outra venda? (1 - Sim, 0 - Nao): ");
        scanf("%d", &continuar);
    }

    printf("\nQuantidade de vendas realizadas: %d\n", numVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda realizada: R$ %.2f\n", maiorVenda);

    return 0;
}
