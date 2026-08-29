#include <stdio.h>

int main() {
    float salarioBase, imposto, salarioReceber;

    printf("Digite o salario-base: ");
    scanf("%f", &salarioBase);

    imposto = salarioBase * 0.10;

    salarioReceber = salarioBase + 50 - imposto;

    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", salarioReceber);

    return 0;
}
