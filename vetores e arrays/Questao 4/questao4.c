#include <stdio.h>

int main() {
    int vetor[8];
    int i, x, y, soma;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);
    while (x < 0 || x > 7) {
        printf("Posicao invalida! Digite de 0 a 7: ");
        scanf("%d", &x);
    }

    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);
    while (y < 0 || y > 7) {
        printf("Posicao invalida! Digite de 0 a 7: ");
        scanf("%d", &y);
    }

    soma = vetor[x] + vetor[y];
    printf("\nA soma dos valores das posicoes %d e %d e: %d\n", x, y, soma);

    return 0;
}
