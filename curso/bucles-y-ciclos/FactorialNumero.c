#include <stdio.h>

// Ejercicio 12: Ingresa un número y calcular su factorial.


int main() {
    int numero, factorial = 1;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un número para calcular su factorial: ");
    scanf("%d", &numero);

    // Calcular el factorial usando un ciclo for
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    // Mostrar el resultado
    printf("El factorial de %d es: %d\n", numero, factorial);

    return 0;
}

