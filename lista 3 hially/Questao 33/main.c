#include <stdio.h>

int main() {
    int voto, v1, v2, v3, total;

    v1 = 0;
    v2 = 0;
    v3 = 0;

    printf("Digite 1, 2 ou 3 para votar. Digite 0 para encerrar.\n");

    printf("Voto: ");
    scanf("%d", &voto);

    while (voto != 0) {
        if (voto == 1) {
            v1++;
        } else if (voto == 2) {
            v2++;
        } else if (voto == 3) {
            v3++;
        } else {
            printf("Voto invalido.\n");
        }

        printf("Voto: ");
        scanf("%d", &voto);
    }

    total = v1 + v2 + v3;

    printf("\nVotos do candidato 1: %d\n", v1);
    printf("Votos do candidato 2: %d\n", v2);
    printf("Votos do candidato 3: %d\n", v3);
    printf("Total de votos: %d\n", total);

    if (v1 > v2 && v1 > v3) {
        printf("Candidato vencedor: 1\n");
    } else if (v2 > v1 && v2 > v3) {
        printf("Candidato vencedor: 2\n");
    } else if (v3 > v1 && v3 > v2) {
        printf("Candidato vencedor: 3\n");
    } else {
        printf("Houve empate.\n");
    }

    return 0;
}
