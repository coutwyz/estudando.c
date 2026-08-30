#include <stdio.h>

int main() {
    float precoFabrica, percentualLucro, percentualImposto;
    float lucro, imposto, precoFinal;

    printf("Digite o preco de fabrica: ");
    scanf("%f", &precoFabrica);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucro);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &percentualImposto);

    lucro = precoFabrica * percentualLucro / 100;
    imposto = precoFabrica * percentualImposto / 100;
    precoFinal = precoFabrica + lucro + imposto;

    printf("Lucro do distribuidor: R$ %.2f\n", lucro);
    printf("Impostos: R$ %.2f\n", imposto);
    printf("Preco final: R$ %.2f\n", precoFinal);

    return 0;
}
