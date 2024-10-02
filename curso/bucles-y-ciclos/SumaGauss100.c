#include <stdio.h>

/*
    Ejercicio 11:
    Comprobar si Gauss tenía razón y la suma de los primeros 100 números enteros
    (del 1 al 100) es 5050. Realizar 3 programas, uno con cada uno de los
    distintos bucles o ciclos que provee el C:
    a) while
    b) do ... while
    c) for
*/

int main() {

    // While
    int i = 1;
    int suma = 0;

    while (i <= 100) {
        suma += i;
        i++;
    }

    printf("La suma con while es: %d\n", suma);

    // Resetear suma e i para probar el siguiente bucle
    suma = 0;
    i = 1;

    /*
    // do...while
    do {
        suma += i;
        i++;
    } while (i <= 100);

    printf("La suma con do...while es: %d\n", suma);

    // Resetear suma e i para probar el siguiente bucle
    suma = 0;
    i = 1;
    */

    /*
    // for
    for (i = 1; i <= 100; i++) {
        suma += i;
    }

    printf("La suma con for es: %d\n", suma);
    */

    return 0;
}

