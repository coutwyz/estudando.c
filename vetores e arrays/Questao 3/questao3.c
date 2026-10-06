#include <stdio.h>

int main() {
    float numeros[10], quadrados[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", numeros[i]);
    }

    printf("\nVetor dos quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f\n", quadrados[i]);
    }

    return 0;
}
