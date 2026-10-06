#include <stdio.h>

int main() {
    int i, aprovados, reprovados;
    float nota, percentual;

    aprovados = 0;
    reprovados = 0;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentual = aprovados * 100.0 / 10;

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.1f%%\n", percentual);

    return 0;
}
