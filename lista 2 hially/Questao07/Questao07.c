#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        resultado = numero + 5;
        printf("O numero e par. Somando 5, o resultado e: %d\n", resultado);
    } else {
        resultado = numero + 8;
        printf("O numero e impar. Somando 8, o resultado e: %d\n", resultado);
    }

    return 0;
}
