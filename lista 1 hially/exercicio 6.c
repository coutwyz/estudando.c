#include <stdio.h>

int main() {
    float salarioBase, gratificacao, imposto, salarioReceber;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    gratificacao = salarioBase * 0.05;
    imposto = salarioBase * 0.07;

    salarioReceber = salarioBase + gratificacao - imposto;

    printf("Gratificacao: R$ %.2f\n", gratificacao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", salarioReceber);

    return 0;
}

