#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b) {
        c = a + b;
        printf("Os valores sao iguais. A soma e: %d\n", c);
    } else {
        c = a * b;
        printf("Os valores sao diferentes. A multiplicacao e: %d\n", c);
    }

    return 0;
}
