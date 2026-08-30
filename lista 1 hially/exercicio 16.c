#include <stdio.h>

int main() {
    float horas, salarioMinimo;
    float valorHora, salarioBruto, imposto, salarioReceber;

    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioMinimo);

    valorHora = salarioMinimo / 2;
    salarioBruto = horas * valorHora;
    imposto = salarioBruto * 3 / 100;
    salarioReceber = salarioBruto - imposto;

    printf("Valor da hora trabalhada: R$ %.2f\n", valorHora);
    printf("Salario bruto: R$ %.2f\n", salarioBruto);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario a receber: R$ %.2f\n", salarioReceber);

    return 0;
}
