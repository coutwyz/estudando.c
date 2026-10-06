#include <stdio.h>

int main() {
    char nome[50];
    char sexo;
    float altura, peso;
    int i, homens = 0, mulheres = 0;
    float somaAlturaH = 0, somaAlturaM = 0, somaPesoH = 0, somaPesoM = 0;
    float mediaAlturaH, mediaAlturaM, mediaAlturaGrupo;
    float mediaPesoH, mediaPesoM, mediaPesoGrupo;

    for (i = 1; i <= 10; i++) {
        printf("\nPessoa %d\n", i);

        printf("Nome: ");
        scanf(" %[^\n]", nome);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Sexo invalido! Digite M ou F: ");
            scanf(" %c", &sexo);
        }

        printf("Altura (em metros): ");
        scanf("%f", &altura);

        printf("Peso (em kg): ");
        scanf("%f", &peso);

        if (sexo == 'M' || sexo == 'm') {
            homens++;
            somaAlturaH = somaAlturaH + altura;
            somaPesoH = somaPesoH + peso;
        } else {
            mulheres++;
            somaAlturaM = somaAlturaM + altura;
            somaPesoM = somaPesoM + peso;
        }
    }

    printf("\n===== RESULTADOS =====\n");
    printf("Numero de homens: %d\n", homens);
    printf("Numero de mulheres: %d\n", mulheres);

    if (homens > 0) {
        mediaAlturaH = somaAlturaH / homens;
        mediaPesoH = somaPesoH / homens;
        printf("Altura media dos homens: %.2f m\n", mediaAlturaH);
    } else {
        printf("Altura media dos homens: nao ha homens no grupo\n");
    }

    if (mulheres > 0) {
        mediaAlturaM = somaAlturaM / mulheres;
        mediaPesoM = somaPesoM / mulheres;
        printf("Altura media das mulheres: %.2f m\n", mediaAlturaM);
    } else {
        printf("Altura media das mulheres: nao ha mulheres no grupo\n");
    }

    mediaAlturaGrupo = (somaAlturaH + somaAlturaM) / 10;
    printf("Altura media do grupo: %.2f m\n", mediaAlturaGrupo);

    if (homens > 0) {
        printf("Peso medio dos homens: %.2f kg\n", mediaPesoH);
    } else {
        printf("Peso medio dos homens: nao ha homens no grupo\n");
    }

    if (mulheres > 0) {
        printf("Peso medio das mulheres: %.2f kg\n", mediaPesoM);
    } else {
        printf("Peso medio das mulheres: nao ha mulheres no grupo\n");
    }

    mediaPesoGrupo = (somaPesoH + somaPesoM) / 10;
    printf("Peso medio do grupo: %.2f kg\n", mediaPesoGrupo);

    return 0;
}
