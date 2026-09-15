#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int valor1, valor2;

    printf("Digite o valor 1 (0 para falso, 1 para verdadeiro): ");
    scanf("%d", &valor1);

    printf("Digite o valor 2 (0 para falso, 1 para verdadeiro): ");
    scanf("%d", &valor2);

    if (valor1 == 1 && valor2 == 1) {
        printf("Os dois valores sao VERDADEIROS!\n");
    } else if (valor1 == 0 && valor2 == 0) {
        printf("Os dois valores sao FALSOS!\n");
    } else {
        printf("Os valores sao diferentes.\n");
    }

    return 0;
}
