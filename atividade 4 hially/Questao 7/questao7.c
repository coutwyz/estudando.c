#include <stdio.h>
#include <ctype.h>

int main() {
    char jogadoras[6][30] = {
        "Marta Vieira",
        "Megan Rapinoe",
        "Alex Morgan",
        "Wendie Renard",
        "Amandine Henry",
        "Sam Kerr"
    };
    char nome[300][50];
    int idade[300];
    char sexo[300];
    int voto[300];
    int votos[6] = {0, 0, 0, 0, 0, 0};
    int total = 0, continuar = 1, mulheres = 0;
    int i, maior;

    while (total < 300 && continuar == 1) {
        printf("\n--- Entrevistado %d ---\n", total + 1);

        printf("Nome: ");
        scanf(" %[^\n]", nome[total]);

        printf("Idade (maior que 12): ");
        scanf("%d", &idade[total]);
        while (idade[total] <= 12) {
            printf("Idade invalida! Digite uma idade maior que 12: ");
            scanf("%d", &idade[total]);
        }

        printf("Sexo (m - masculino / f - feminino): ");
        scanf(" %c", &sexo[total]);
        sexo[total] = tolower(sexo[total]);
        while (sexo[total] != 'm' && sexo[total] != 'f') {
            printf("Sexo invalido! Digite m ou f: ");
            scanf(" %c", &sexo[total]);
            sexo[total] = tolower(sexo[total]);
        }

        printf("Qual a melhor jogadora?\n");
        for (i = 0; i < 6; i++) {
            printf("%d - %s\n", i + 1, jogadoras[i]);
        }
        printf("Voto: ");
        scanf("%d", &voto[total]);
        while (voto[total] < 1 || voto[total] > 6) {
            printf("Voto invalido! Digite um numero de 1 a 6: ");
            scanf("%d", &voto[total]);
        }

        votos[voto[total] - 1]++;

        if (sexo[total] == 'f') {
            mulheres++;
        }

        total++;

        if (total >= 50 && total < 300) {
            printf("\nDeseja continuar a pesquisa? (1 - sim / 0 - nao): ");
            scanf("%d", &continuar);
        }
    }

    printf("\n===== QUANTIDADE DE VOTOS =====\n");
    for (i = 0; i < 6; i++) {
        printf("%s: %d voto(s)\n", jogadoras[i], votos[i]);
    }

    maior = votos[0];
    for (i = 1; i < 6; i++) {
        if (votos[i] > maior) {
            maior = votos[i];
        }
    }
    printf("\n===== JOGADORA(S) MAIS VOTADA(S) =====\n");
    for (i = 0; i < 6; i++) {
        if (votos[i] == maior) {
            printf("%s (%d votos)\n", jogadoras[i], votos[i]);
        }
    }

    printf("\n===== HOMENS MAIORES DE IDADE =====\n");
    for (i = 0; i < total; i++) {
        if (sexo[i] == 'm' && idade[i] >= 18) {
            printf("Nome: %s | Idade: %d | Sexo: masculino\n", nome[i], idade[i]);
        }
    }

    printf("\n===== HOMENS MENORES DE IDADE =====\n");
    for (i = 0; i < total; i++) {
        if (sexo[i] == 'm' && idade[i] < 18) {
            printf("Nome: %s | Idade: %d | Sexo: masculino\n", nome[i], idade[i]);
        }
    }

    printf("\n===== MULHERES MAIORES DE IDADE =====\n");
    for (i = 0; i < total; i++) {
        if (sexo[i] == 'f' && idade[i] >= 18) {
            printf("Nome: %s | Idade: %d | Sexo: feminino\n", nome[i], idade[i]);
        }
    }

    printf("\n===== MULHERES MENORES DE IDADE =====\n");
    for (i = 0; i < total; i++) {
        if (sexo[i] == 'f' && idade[i] < 18) {
            printf("Nome: %s | Idade: %d | Sexo: feminino\n", nome[i], idade[i]);
        }
    }

    printf("\n===== MAIORES DE IDADE QUE VOTARAM NA MARTA VIEIRA =====\n");
    for (i = 0; i < total; i++) {
        if (idade[i] >= 18 && voto[i] == 1) {
            printf("%s\n", nome[i]);
        }
    }

    printf("\nQuantidade de mulheres na pesquisa: %d\n", mulheres);

    return 0;
}
