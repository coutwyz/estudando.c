#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%lf", &peso);

    printf("Digite sua altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2lf\n", imc);

    if (imc < 18.5) {
        printf("Condicao: abaixo do peso\n");
    } else if (imc < 25) {
        printf("Condicao: peso normal\n");
    } else if (imc < 30) {
        printf("Condicao: acima do peso\n");
    } else {
        printf("Condicao: obeso\n");
    }

    return 0;
}
