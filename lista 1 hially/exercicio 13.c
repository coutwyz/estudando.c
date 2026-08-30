#include <stdio.h>

int main() {
    float pes, polegadas, jardas, milhas;

    printf("Digite a medida em pes: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes / 3;
    milhas = pes / 5280;

    printf("Em polegadas: %.2f\n", polegadas);
    printf("Em jardas: %.2f\n", jardas);
    printf("Em milhas: %.2f\n", milhas);

    return 0;
}
