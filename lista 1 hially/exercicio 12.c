#include <stdio.h>
#include <math.h>

int main() {
    float numero1, numero2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if (numero1 > 0 && numero2 > 0) {
        resultado = pow(numero1, numero2);

        printf("%.2f elevado a %.2f = %.2f\n", numero1, numero2, resultado);
    } else {
        printf("Os dois numeros devem ser maiores que zero.\n");
    }

    return 0;
}
