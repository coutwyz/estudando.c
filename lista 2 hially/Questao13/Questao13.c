#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double velMax, velRegistrada, percentual;

    printf("Digite a velocidade maxima permitida: ");
    scanf("%lf", &velMax);

    printf("Digite a velocidade registrada: ");
    scanf("%lf", &velRegistrada);

    if (velRegistrada > velMax) {
        percentual = ((velRegistrada - velMax) / velMax) * 100.0;

        printf("Limite de velocidade ultrapassado!\n");
        printf("Percentual excedido: %.2lf%%\n", percentual);

        if (percentual <= 20.0) {
            printf("Classificacao: Infracao Media\n");
        } else if (percentual <= 50.0) {
            printf("Classificacao: Infracao Grave\n");
        } else {
            printf("Classificacao: Infracao Gravissima\n");
        }

        if (velRegistrada > 120.0) {
            printf("Alerta: velocidade extremamente elevada!\n");
        }
    } else {
        printf("Sem infracoes.\n");
    }

    return 0;
}
