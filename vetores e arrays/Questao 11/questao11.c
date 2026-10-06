#include <stdio.h>

int main() {
    float numeros[10];
    float somaPositivos = 0;
    int i, negativos = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        } else if (numeros[i] > 0) {
            somaPositivos = somaPositivos + numeros[i];
        }
    }

    printf("\nQuantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", somaPositivos);

    return 0;
}
