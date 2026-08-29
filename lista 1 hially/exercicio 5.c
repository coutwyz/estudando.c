#include <stdio.h>

int main() {
    float salario, percentual, aumento, novoSalario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
