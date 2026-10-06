#include <stdio.h>

int main() {
    int quantidade, i;
    float nota, soma, media;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidade);

    soma = 0;

    for (i = 1; i <= quantidade; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma = soma + nota;
    }

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media da turma: %.2f\n", media);
    } else {
        printf("Quantidade de alunos invalida.\n");
    }

    return 0;
}
