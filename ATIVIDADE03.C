#include <stdio.h>
#include <math.h>  // para usar M_PI

int main() {
    float raio, area, perimetro;

    // Entrada de Dados 
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    // Cálculos
    area = M_PI * pow(raio, 2);       // A = π * r²
    perimetro = 2 * M_PI * raio;      // P = 2 * π * r

    // Saída 
    printf("A area do circulo eh: %.2f\n", area);
    printf("O perimetro do circulo eh: %.2f\n", perimetro);

    return 0;
}