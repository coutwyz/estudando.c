#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double numero, resultado;

    printf("Digite um numero: ");
    scanf("%lf", &numero);

    if (numero > 0) {
        resultado = numero * 2;
        printf("O numero e positivo. O dobro e: %.2lf\n", resultado);
    } else if (numero < 0) {
        resultado = numero * 3;
        printf("O numero e negativo. O triplo e: %.2lf\n", resultado);
    } else {
        printf("O numero digitado e zero.\n");
    }

    return 0;
}
