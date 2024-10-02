#include <stdio.h>

/*
    Ejercicio 14:
    Con 4 for anidados, armar los números binarios del 0 al 15.
*/

int main() {

    // Usamos 4 for anidados para representar 4 bits (desde el 0000 hasta el 1111)
    for (int bit1 = 0; bit1 <= 1; bit1++) {
        for (int bit2 = 0; bit2 <= 1; bit2++) {
            for (int bit3 = 0; bit3 <= 1; bit3++) {
                for (int bit4 = 0; bit4 <= 1; bit4++) {
                    printf("%d%d%d%d\n", bit1, bit2, bit3, bit4);
                }
            }
        }
    }

    return 0;
}

