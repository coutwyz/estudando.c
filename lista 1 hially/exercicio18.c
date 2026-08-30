#include <stdio.h>

int main() {
    float pesoSaco, racaoGato;
    float pesoGramas, consumo, restante;

    printf("Digite o peso do saco de racao em kg: ");
    scanf("%f", &pesoSaco);

    printf("Digite a quantidade de racao para cada gato por dia em gramas: ");
    scanf("%f", &racaoGato);

    pesoGramas = pesoSaco * 1000;
    consumo = racaoGato * 2 * 5;
    restante = pesoGramas - consumo;

    printf("Racao restante apos cinco dias: %.2f gramas\n", restante);

    return 0;
}
