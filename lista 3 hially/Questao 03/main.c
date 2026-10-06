#include <stdio.h>

int main() {
    float n1, n2, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;

    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    if (n2 != 0) {
        divisao = n1 / n2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Nao e possivel dividir por zero.\n");
    }

    return 0;
}
