#include <stdio.h>

int main() {
    int anoNascimento, anoAtual, idade, idade2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;
    idade2050 = 2050 - anoNascimento;

    printf("Idade atual: %d anos\n", idade);
    printf("Idade em 2050: %d anos\n", idade2050);

    return 0;
}
