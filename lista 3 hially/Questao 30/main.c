#include <stdio.h>

int main() {
    float saldo = 1000.00;
    float valor;
    int opcao;

    opcao = 0;

    while (opcao != 4) {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1. Consultar saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Saldo atual: R$ %.2f\n", saldo);
        } else if (opcao == 2) {
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);
            if (valor > 0) {
                saldo = saldo + valor;
                printf("Deposito realizado com sucesso.\n");
            } else {
                printf("Valor invalido.\n");
            }
        } else if (opcao == 3) {
            printf("Digite o valor do saque: ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido.\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                saldo = saldo - valor;
                printf("Saque realizado com sucesso.\n");
            }
        } else if (opcao == 4) {
            printf("Saindo...\n");
        } else {
            printf("Opcao invalida.\n");
        }
    }

    return 0;
}
