#include <stdio.h>

int main() {
    int i;
    float numero, maior;

    for (i = 1; i <= 10; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%f", &numero);

        if (i == 1) {
            maior = numero;
        } else if (numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %.2f\n", maior);

    return 0;
}
