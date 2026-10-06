#include <stdio.h>

int main() {
    int numero, i, qtd = 0, j;
    int divisores[1000];

    printf("Digite um numero positivo: ");
    scanf("%d", &numero);

    while (numero <= 0) {
        printf("Numero invalido! Digite um numero positivo: ");
        scanf("%d", &numero);
    }

    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            divisores[qtd] = i;
            qtd++;
        }
    }

    printf("Os divisores do numero %d sao: ", numero);
    for (j = 0; j < qtd; j++) {
        printf("%d", divisores[j]);
        if (j < qtd - 2) {
            printf(", ");
        } else if (j == qtd - 2) {
            printf(" e ");
        }
    }
    printf("\n");

    return 0;
}
