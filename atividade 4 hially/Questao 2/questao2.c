#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, total = 0, contador = 0;
    float salario, porcentagem;

    while (1) {
        printf("\nDigite a idade (-1 para encerrar): ");
        scanf("%d", &idade);

        while (idade != -1 && (idade < 10 || idade > 100)) {
            printf("Idade invalida! Digite entre 10 e 100: ");
            scanf("%d", &idade);
        }

        if (idade == -1) {
            break;
        }

        printf("Digite o sexo (m/f): ");
        scanf(" %c", &sexo);
        while (sexo != 'm' && sexo != 'f') {
            printf("Sexo invalido! Digite m ou f: ");
            scanf(" %c", &sexo);
        }

        printf("Digite a cor dos olhos (a/v/c/p): ");
        scanf(" %c", &olhos);
        while (olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p') {
            printf("Cor invalida! Digite a, v, c ou p: ");
            scanf(" %c", &olhos);
        }

        printf("Digite a cor dos cabelos (l/c/p/r): ");
        scanf(" %c", &cabelos);
        while (cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r') {
            printf("Cor invalida! Digite l, c, p ou r: ");
            scanf(" %c", &cabelos);
        }

        printf("Digite o salario: ");
        scanf("%f", &salario);
        while (salario < 0) {
            printf("Salario invalido! Digite um valor nao negativo: ");
            scanf("%f", &salario);
        }

        total++;

        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            contador++;
        }
    }

    if (total > 0) {
        porcentagem = (float) contador * 100 / total;
        printf("\nTotal de habitantes: %d\n", total);
        printf("Porcentagem de mulheres de 18 a 35 anos com olhos e cabelos castanhos: %.2f%%\n", porcentagem);
    } else {
        printf("\nNenhum habitante foi cadastrado.\n");
    }

    return 0;
}
