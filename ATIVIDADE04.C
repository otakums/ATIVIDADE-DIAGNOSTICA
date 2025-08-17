#include <stdio.h>

int main() {
    float preco, descontoPercentual, valorFinal;

    // Entrada de Dados
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);

    printf("Digite o percentual de desconto (ex: 10 para 10%%): ");
    scanf("%f", &descontoPercentual);

    // Cálculo
    valorFinal = preco - (preco * (descontoPercentual / 100));

    // Saída
    printf("O valor final do produto com desconto eh: R$ %.2f\n", valorFinal);

    return 0;
}