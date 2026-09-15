#include <stdio.h>
#include <string.h>
#include <windows.h>

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char nome[100];
    char sexo;
    char estadoCivil[20];
    int tempoCasamento;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo (F ou M): ");
    scanf(" %c", &sexo);

    printf("Digite o estado civil (SOLTEIRA, CASADA, VIUVA, etc): ");
    scanf("%s", estadoCivil);

    if (sexo == 'F' && strcmp(estadoCivil, "CASADA") == 0) {
        printf("Digite o tempo de casamento em anos: ");
        scanf("%d", &tempoCasamento);
        printf("Voce esta casada ha %d anos.\n", tempoCasamento);
    } else {
        printf("Dados cadastrados com sucesso.\n");
    }

    return 0;
}
