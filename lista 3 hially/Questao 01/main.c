#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Ola, %s! Seja bem-vindo(a) a disciplina de Logica de Programacao.\n", nome);

    return 0;
}
