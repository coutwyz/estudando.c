#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int identificador;
    double nota1, nota2, nota3;
    double mediaExercicios, mediaAproveitamento;
    char conceito;

    printf("Digite o numero de identificacao do aluno: ");
    scanf("%d", &identificador);

    printf("Digite a nota 1: ");
    scanf("%lf", &nota1);

    printf("Digite a nota 2: ");
    scanf("%lf", &nota2);

    printf("Digite a nota 3: ");
    scanf("%lf", &nota3);

    mediaExercicios = (nota1 + nota2 + nota3) / 3.0;
    mediaAproveitamento = (nota1 + (nota2 * 2.0) + (nota3 * 3.0) + mediaExercicios) / 7.0;

    if (mediaAproveitamento >= 90.0) {
        conceito = 'A';
    } else if (mediaAproveitamento >= 75.0) {
        conceito = 'B';
    } else if (mediaAproveitamento >= 60.0) {
        conceito = 'C';
    } else if (mediaAproveitamento >= 40.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\nIdentificacao do aluno: %d\n", identificador);
    printf("Media de aproveitamento: %.2lf\n", mediaAproveitamento);
    printf("Conceito obtido: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao: APROVADO\n");
    } else {
        printf("Situacao: REPROVADO\n");
    }

    return 0;
}
