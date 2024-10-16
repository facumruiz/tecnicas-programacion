#include <stdio.h>

/*
    Ejercicio 8: Programa que solicita las notas de "Física", "Matemática" y "Electrónica",
    y calcula el promedio de las materias aprobadas (notas >= 4).
*/

int main(void) {
    int cont = 0;      // Contador de materias aprobadas
    int acum = 0;     // Acumulador de notas aprobadas
    int nota = 0;     // Nota ingresada
    float prom;       // Promedio de notas aprobadas

    // Solicitar notas y acumular las aprobadas
    printf("Nota fisica: ");
    scanf("%d", &nota);
    if (nota >= 4) { cont++; acum += nota; }

    printf("Nota matematica: ");
    scanf("%d", &nota);
    if (nota >= 4) { cont++; acum += nota; }

    printf("Nota electronica: ");
    scanf("%d", &nota);
    if (nota >= 4) { cont++; acum += nota; }

    // Mostrar resultados
    printf("Dato acumulador: %d. Dato cont: %d", acum, cont);

    if (cont > 0) {
        prom = (float)acum / cont; // Calcular promedio
        printf("\n\nAprobo %d materias", cont);
        printf("\n\nPromedio: %.2f", prom);
        if(prom > 6.50) { printf(" (Aprobado)"); }
    } else {
        printf("\nERROR"); // Sin materias aprobadas
    }
}
