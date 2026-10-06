#include <stdio.h>

int main() {
    int n, i;
    long long anterior = 0, atual = 1, proximo, resultado;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    while (n < 0) {
        printf("Numero invalido! Digite um numero maior ou igual a zero: ");
        scanf("%d", &n);
    }

    if (n == 0) {
        resultado = 0;
    } else if (n == 1) {
        resultado = 1;
    } else {
        for (i = 2; i <= n; i++) {
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
        resultado = atual;
    }

    printf("O termo de ordem %d da sequencia de Fibonacci e: %lld\n", n, resultado);

    return 0;
}
