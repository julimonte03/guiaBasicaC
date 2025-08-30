// necesitamos comparar el numero A con el numero B, queremos ver si los bits mas significativos de A, por ej: A = 101xxxxx... (32 bits en total) son iguales a los bits menos significativos de B, por ej: B = xxxxxxx101 (32 bits en total)

// a A lo vamos a shiftear a derecha para tener los bits mas significativos en la parte izquierda, luego con un and vemos que bits son.

// a B simplemente le hacemos un and con los tres bits menos significativos y luego comparamos 

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>


bool iguales_top3_low3(uint32_t a, uint32_t b) {
    uint32_t top3 = (a >> 29) & 0x7u; // con >> shifteamos a derecha
    uint32_t low3 = b & 0x7u;    // 0000000.....101  
    return top3 == low3;
}

int main(){
    uint32_t A, B;

    printf("Ingrese el numero A (decimal): ");
    if (scanf("%u", &A) != 1) {
        printf("Error al leer A.\n");
        return 1;
    }

    printf("Ingrese el numero B (decimal): ");
    if (scanf("%u", &B) != 1) {
        printf("Error al leer B.\n");
        return 1;
    }

    if (iguales_top3_low3(A,B)) printf("chetoo");
    else printf("mal ahi compa");
    return 0;
}