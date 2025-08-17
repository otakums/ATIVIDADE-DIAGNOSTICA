#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Entrada de Dados
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Conversão de Temperatura
    fahrenheit = (celsius * 9 / 5) + 32;

    // Saída
    printf("A temperatura em Fahrenheit eh: %.2f\n", fahrenheit);

    return 0;
}