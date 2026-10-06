#include <stdio.h>

int main() {
    char nome[50];
    int quantidade, i;
    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;
    float nota1, nota2, media;
    float soma = 0;
    float maior, menor;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++) {
        printf("\nAluno %d\n", i);
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Nota da primeira avaliacao: ");
        scanf("%f", &nota1);
        printf("Nota da segunda avaliacao: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        printf("Media: %.2f\n", media);

        if (media >= 7) {
            printf("Situacao: Aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("Situacao: Recuperacao\n");
            recuperacao++;
        } else {
            printf("Situacao: Reprovado\n");
            reprovados++;
        }

        soma = soma + media;

        if (i == 1) {
            maior = media;
            menor = media;
        } else {
            if (media > maior) {
                maior = media;
            }
            if (media < menor) {
                menor = media;
            }
        }
    }

    if (quantidade > 0) {
        printf("\nQuantidade de alunos: %d\n", quantidade);
        printf("Aprovados: %d\n", aprovados);
        printf("Em recuperacao: %d\n", recuperacao);
        printf("Reprovados: %d\n", reprovados);
        printf("Media geral da turma: %.2f\n", soma / quantidade);
        printf("Maior media: %.2f\n", maior);
        printf("Menor media: %.2f\n", menor);
    } else {
        printf("Quantidade de alunos invalida.\n");
    }

    return 0;
}
