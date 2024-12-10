#include <stdio.h>

/*
    Armar un programa que simule el control a dos manos: sistema de seguridad de las
    maquinas donde se accionan con ambas manos del operario, como para que las
    retire de areas peligrosas.
*/

int main() {
    int mano1, mano2;

    // Pedir al usuario que ingrese la posición de las manos (1 = activa, 0 = inactiva)
    printf("Ingrese el estado de la mano 1 (0 para inactiva, 1 para activa): ");
    scanf("%d", &mano1);

    printf("Ingrese el estado de la mano 2 (0 para inactiva, 1 para activa): ");
    scanf("%d", &mano2);

    // Verificar si ambas manos están en posiciones opuestas para activar la máquina
    if (mano1 != mano2) {
        printf("La maquina esta encendida.\n");
    } else {
        printf("La maquina esta apagada.\n");
    }


}
