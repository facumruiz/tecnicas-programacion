#include <stdio.h>

/*
    Ejercicio A:
    Armar un programa que permita ingresar tres valores: uno para horas (suponemos
    que solo se ingresará valores entre 0 y 23), uno para minutos (0-59) y uno para
    segundos (0-59). Se solicita que a la hora ingresada se le sume un segundo y su
    resultado aparezca en pantalla.
*/

int main(void) {
    int hh = 0, mm = 0, ss = 0;

    printf("Ingresar datos formato (hh:mm:ss): ");
    scanf("%d %d %d", &hh, &mm, &ss);

    // Mostrar hora ingresada
    printf("\nHora ingresada: %02d:%02d:%02d\n", hh, mm, ss);

    // Sumar un segundo
    ss++;

    // Manejar el overflow de los segundos
    if (ss >= 60) {
        ss = 0;
        mm++;
    }

    // Manejar el overflow de los minutos
    if (mm >= 60) {
        mm = 0;
        hh++;
    }

    // Manejar el overflow de las horas
    if (hh >= 24) {
        hh = 0;
    }

    // Mostrar el resultado final
    printf("Hora después de añadir un segundo: %02d:%02d:%02d\n", hh, mm, ss);

    return 0;
}
