#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de combustivel em litros: ");
    scanf("%f", &litros);

    if (litros > 0) {
        consumo = distancia / litros;
        printf("Consumo medio: %.2f km/L\n", consumo);
    } else {
        printf("A quantidade de litros deve ser maior que zero.\n");
    }

    return 0;
}
