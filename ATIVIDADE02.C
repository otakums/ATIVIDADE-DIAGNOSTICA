#include <stdio.h>

int main() {
    float salarioBase, valorHoraExtra, totalReceber;
    int horasExtras;

    // Entrada de dados
    printf("Digite o salario base: ");
    scanf("%f", &salarioBase);

    printf("Digite o valor da hora extra: ");
    scanf("%f", &valorHoraExtra);

    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%d", &horasExtras);

    // Cálculo
    totalReceber = salarioBase + (valorHoraExtra * horasExtras);

    // Saída
    printf("O valor total a receber eh: R$ %.2f\n", totalReceber);

    return 0;
}