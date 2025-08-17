#include <stdio.h>

int main() {
    int maquinas1 = 8, maquinas2 = 10;
    int pecas1 = 120;
    int horas = 5;
    int pecas2;
    
     // Entrada de Dados
    // Regra de três:
    // 8 maquinas -> 120 pecas
    // 10 maquinas -> X pecas
    pecas2 = (pecas1 * maquinas2) / maquinas1;

    // Saída 
    printf("Em %d horas, %d maquinas produzem %d pecas.\n", horas, maquinas2, pecas2);

    return 0;
}