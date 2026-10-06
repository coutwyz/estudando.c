#include <stdio.h>

int main() {
    float valores[5];
    int i, posMaior = 0, posMenor = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &valores[i]);
    }

    for (i = 1; i < 5; i++) {
        if (valores[i] > valores[posMaior]) {
            posMaior = i;
        }
        if (valores[i] < valores[posMenor]) {
            posMenor = i;
        }
    }

    printf("\nO maior valor (%.2f) esta na posicao %d\n", valores[posMaior], posMaior);
    printf("O menor valor (%.2f) esta na posicao %d\n", valores[posMenor], posMenor);

    return 0;
}
