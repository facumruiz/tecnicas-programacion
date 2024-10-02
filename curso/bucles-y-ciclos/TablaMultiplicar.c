#include <stdio.h>

/*
    Ejercicio 13:
    Ingresar un número y armar la tabla de multiplicación de ese número,
    desde el 1 al 10.
*/

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un número para generar su tabla de multiplicar: ");
    scanf("%d", &numero);

    // Generar la tabla de multiplicación usando un ciclo for
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

