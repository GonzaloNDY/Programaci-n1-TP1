#include <stdio.h>

int main() {
    int opcion;
    printf("\n\t\t\tPrograma de los dias de la semana\n\nIngrese una de las siguientes opciones:\n");
    printf("1\t\t5\n2\t\t6\n3\t\t7\n4\nPresione '8' para salir del programa\n\n");
    do {
        scanf("%i", &opcion);
        switch (opcion) {
            case 1:
                printf("El 1 es: Lunes\n");
                break;
            case 2:
                printf("El 2 es: Martes\n");
                break;
            case 3:
                printf("El 3 es: Miercoles\n");
                break;
            case 4:
                printf("El 4 es: Jueves\n");
                break;
            case 5:
                printf("El 5 es: Viernes\n");
                break;
            case 6:
                printf("El 6 es: Sabado\n");
                break;
            case 7:
                printf("El 7 es: Domingo\n");
                break;
            case 8:
                printf("Usted salió del programa\n");
                break;
            default:
                printf("No es un dia de la semana\n");
        }
    } while (opcion != 8);
    return 0;
}