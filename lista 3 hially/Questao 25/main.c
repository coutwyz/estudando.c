#include <stdio.h>

int main() {
    int n, i, soma;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    soma = 0;

    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }

    printf("Soma de 1 ate %d: %d\n", n, soma);

    return 0;
}
