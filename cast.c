#include <stdio.h>

int main() {
    float flot = 0.1;
    double boble = 0.1;

    // Imprimir los valores como float y double
    printf("Float: %f\n", flot);  // Imprime el valor de flot (float)
    printf("Double: %f\n", boble); // Imprime el valor de boble (double)

    // Realizar cast a int y mostrar el resultado
    printf("Cast de float a int: %d\n", (int)flot);  // Imprime el cast de float a int
    printf("Cast de double a int: %d\n", (int)boble); // Imprime el cast de double a int

    return 0;
}


