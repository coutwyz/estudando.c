#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double altura, pesoIdeal;
    char sexo;

    printf("Digite seu sexo (F ou M): ");
    scanf(" %c", &sexo);

    printf("Digite sua altura (ex: 1.75): ");
    scanf("%lf", &altura);

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("Seu peso ideal e: %.2lf kg\n", pesoIdeal);

    return 0;
}
