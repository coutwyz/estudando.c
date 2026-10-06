#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    printf("Media: %.2f\n", media);

    if (media >= 7) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 5) {
        printf("Situacao: Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    return 0;
}
