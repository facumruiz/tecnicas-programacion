#include <stdio.h>

/*
    Armar un programa que simule la llave de encendido de la luz de una escalera: una
    llave en el principio de la escalera y una llave al final de la escalera, para que
    cualquiera que se accione, ó las dos, debe encender la luz.
*/

// Función para mostrar la luz apagada
void mostrarLuzApagada() {
    printf("            \n");
    printf("                  [Luz Off] ◯\n");
}

// Función para mostrar la luz encendida con estela
void mostrarLuzEncendida() {
    printf("            \n");
    printf("                 [Luz On]       ●\n");
    printf("                              *   *\n");
    printf("                             *     *\n");
    printf("                            *       *\n");
    printf("                           *         *\n");
}

// Función para mostrar el dibujo de la escalera
void mostrarEscalera(int llaveA, int llaveB) {
    printf("     [A]%d  \n", llaveA);
    printf("            \n");
    printf(" ___________\n");
    printf("            |\n");
    printf("            |_______\n");
    printf("                    |\n");
    printf("                    |_______           [B]%d\n", llaveB);
    printf("                            |\n");
    printf("                            |____________\n");
}

int main(void) {
    int llaveA = 0, llaveB = 0, luz = 0, opcion;

    printf("Simulación de luz de escalera\n");

    // Mostrar el estado inicial de la luz (apagada) y la escalera
    mostrarLuzApagada();
    mostrarEscalera(llaveA, llaveB);

    // Solicitar al usuario la opción
    printf("\nSeleccione una opción:\n");
    printf("1. Alternar llave A\n");
    printf("2. Alternar llave B\n");
    scanf("%d", &opcion);

    // Alternar la llave seleccionada
    if (opcion == 1) {
        llaveA = !llaveA; // Cambiar estado de llave A
    } else if (opcion == 2) {
        llaveB = !llaveB; // Cambiar estado de llave B
    } else {
        printf("Opción inválida.\n");
        return 1;
    }

    // Determinar el estado de la luz
    luz = (llaveA || llaveB); // La luz está encendida si al menos una llave está en ON


    // Mostrar el estado de la luz
    if (luz == 1) {
        //printf("Luz: Encendida\n");
        mostrarLuzEncendida();  // Mostrar la luz encendida con estela
    } else {
        printf("Luz: Apagada\n");
    }

    // Mostrar la escalera después de la acción
    mostrarEscalera(llaveA, llaveB);

    return 0;
}
