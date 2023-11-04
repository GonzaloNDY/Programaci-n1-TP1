#include <stdio.h>

int main() {
    float mes1, mes2, mes3;
    printf("\n\t\tPrograma para el control de globulos rojos en sangre\n");
    printf("Ingrese el valor de globulos rojos del mes 1:\t");
    scanf("%f", &mes1);
    printf("Ingrese el valor de globulos rojos del mes 2:\t");
    scanf("%f", &mes2);
    printf("Ingrese el valor de globulos rojos del mes 3:\t");
    scanf("%f", &mes3);
    if (mes1 < mes2) {
        if (mes2 < mes3) {
            printf("\nLos globulos rojos aumentaron entre el mes 1, 2 y 3");
        } else if (mes2 == mes3) {
            printf("\nLos globulos rojos aumentaron en el mes 1 y 2, y se mantuvieron iguales durante el mes 2 y 3");
        } else {
            printf("\nLos globulos rojos aumentaron en el mes 1 y 2, y disminuyeron entre el mes 2 y 3");
        }
    } else if (mes1 > mes2) {
        if (mes2 < mes3) {
            printf("Los globulos rojos disminuyeron entre el mes 1 y 2, y aumentaron entre el mes 2 y 3");
        } else if (mes2 == mes3) {
            printf("Los globulos rojos disminuyeron entre el mes 1 y 2, y se mantuvieron iguales durante el mes 2 y 3");
        } else {
            printf("\nLos globulos rojos disminuyeron entre el mes 1, 2 y 3");
        }
    } else {
        if (mes2 < mes3) {
            printf("Los globulos rojos se mantuvieron iguales durante el mes 1 y 2, y aumentaron entre el mes 2 y 3");
        } else if (mes2 == mes3) {
            printf("\nLos globulos rojos se mantuvieron iguales durante el mes 1, 2 y 3");
        } else {
            printf("Los globulos rojos se mantuvieron iguales durante el mes 1 y 2, y disminuyeron entre el mes 2 y 3");
        }
    }
    return 0;
}