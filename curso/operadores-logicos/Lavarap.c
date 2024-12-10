#include <stdio.h>

int main() {
    int sensor_puerta, sensor_agua, sensor_jabon, sensor_acondicionador;

    int programa;

    // Solicitar al usuario que seleccione el programa
    printf("Seleccione el programa (1: Lavado simple, 2: Lavado ropa fina, 3: Limpieza lavarropas): ");
    scanf("%d", &programa);

    // Solicitar los estados de los sensores
    printf("Sensor de puerta cerrada (1: cumple, 0: no cumple): ");
    scanf("%d", &sensor_puerta);
    
    printf("Sensor de carga de agua lista (1: cumple, 0: no cumple): ");
    scanf("%d", &sensor_agua);
    
    printf("Sensor de jabon liquido disponible (1: cumple, 0: no cumple): ");
    scanf("%d", &sensor_jabon);

    if (programa == 2) {
        printf("Sensor de acondicionador de ropa disponible (1: cumple, 0: no cumple): ");
        scanf("%d", &sensor_acondicionador);
    }

    // Verificar si los sensores cumplen con las condiciones para iniciar el motor
    if (sensor_puerta == 1 && sensor_agua == 1) {
        if (programa == 1) {
            if (sensor_jabon == 1) {
                printf("Motor de lavarropas encendido - Lavado simple.\n");
            } else {
                printf("No se puede iniciar el lavado simple. Falta jabón líquido.\n");
            }
        } else if (programa == 2) {
            if (sensor_jabon == 1 && sensor_acondicionador == 1) {
                printf("Motor de lavarropas encendido - Lavado ropa fina.\n");
            } else {
                printf("No se puede iniciar el lavado ropa fina. Falta jabón líquido o acondicionador.\n");
            }
        } else if (programa == 3) {
            printf("Motor de lavarropas encendido - Limpieza del lavarropas.\n");
        } else {
            printf("Programa no válido.\n");
        }
    } else {
        printf("No se puede iniciar el motor. Verifique los sensores de puerta o agua.\n");
    }


}
