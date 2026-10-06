#include <stdio.h>

int main() {
    int opcao, quantidade;
    int numItens = 0;
    float total = 0;

    opcao = 0;

    while (opcao != 4) {
        printf("\n===== LANCHONETE =====\n");
        printf("1. X-Burger  - R$ 15.00\n");
        printf("2. Batata    - R$ 10.00\n");
        printf("3. Refrigerante - R$ 6.00\n");
        printf("4. Finalizar pedido\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade > 0) {
                if (opcao == 1) {
                    total = total + quantidade * 15.00;
                } else if (opcao == 2) {
                    total = total + quantidade * 10.00;
                } else {
                    total = total + quantidade * 6.00;
                }
                numItens = numItens + quantidade;
                printf("Item adicionado ao pedido.\n");
            } else {
                printf("Quantidade invalida.\n");
            }
        } else if (opcao != 4) {
            printf("Opcao invalida.\n");
        }
    }

    printf("\nTotal de itens: %d\n", numItens);
    printf("Valor total do pedido: R$ %.2f\n", total);

    return 0;
}
