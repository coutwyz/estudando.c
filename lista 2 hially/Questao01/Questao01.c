#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c, soma;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Digite o valor de C: ");
    scanf("%d", &c);

    soma = a + b;

    if (soma < c) {
        printf("A soma de A + B (%d) e menor que C (%d)\n", soma, c);
    } else if (soma == c) {
        printf("A soma de A + B (%d) e igual a C (%d)\n", soma, c);
    } else {
        printf("A soma de A + B (%d) e maior que C (%d)\n", soma, c);
    }

    return 0;
}
