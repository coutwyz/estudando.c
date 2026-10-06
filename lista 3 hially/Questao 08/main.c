#include <stdio.h>

int main() {
    float horas, valorHora, salario;

    printf("Digite as horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("Salario bruto: R$ %.2f\n", salario);

    return 0;
}
