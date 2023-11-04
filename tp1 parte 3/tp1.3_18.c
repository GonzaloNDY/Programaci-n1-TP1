/*Codificar un programa para ingresar la altura, el ancho y largo de una caja y los almacene en una
estructura. Luego calcular y presentar por pantalla el volumen de la caja*/

#include <stdio.h>

typedef struct{
    float altura;
    float ancho;
    float largo;
}cajas;
int main(int argc, char*argv[]){
    cajas caja1;
    printf("\n\t\tPrograma para calcular el volumen de una caja\nIngrese la altura de la caja:\t");
    scanf("%f", &caja1.altura);
    printf("Ingrese el ancho de la caja:\t");
    scanf("%f", &caja1.ancho);
    printf("Ingrese el largo de la caja:\t");
    scanf("%f", &caja1.largo);
    printf("El volumen de la caja ingresada es: %.1f\n", caja1.altura*caja1.ancho*caja1.largo);
    return 0;
}