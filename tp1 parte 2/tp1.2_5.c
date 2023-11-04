#include <stdio.h>

int main(int argc, char* argv[]) {
    int dia, mes, anio;
    printf("\nIngrese una fecha valida(dia no debe superar el valor 31, mes el valor 12 y año debe ser un numero positivo)");
    printf("\nDia:\t");
    scanf("%i", &dia);
    while (dia <= 0 || dia > 31) {
        printf("Ingrese un dia valido:\t");
        scanf("%i", &dia);
    }
    printf("Mes:\t");
    scanf("%i", &mes);
    while (mes <= 0 || mes > 12) {
        printf("Ingrese un mes valido:\t");
        scanf("%i", &mes);
    }
    printf("Año:\t");
    scanf("%i", &anio);
    while (anio <= 0) {
        printf("Ingrese un año valido:\t");
        scanf("%i", &anio);
    }
    printf("\t\tLa fecha ingresada es: %i/%i/%i\n", dia, mes, anio);
    return 0;
}
