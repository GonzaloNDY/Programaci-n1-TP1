/*Implementar un programa en el que se soliciten el radio de la base y la altura de un cilindro
circular y luego se presenten por pantalla los datos. Usar una estructura como la siguiente:
struct cilindro{
float radio
float altura;
};  */

#include <stdio.h>

struct cilindros{
float radio;
float altura;
};

int main(int argc, char*argv[]){
    struct cilindros cilindro1;
    printf("\nIngrese el radio del cilindro:\t");
    scanf("%f", &cilindro1.radio);
    printf("Ingrese la altura del cilindro:\t");
    scanf("%f", &cilindro1.altura);
    printf("El radio del cilindro es: %.2f\nLa altura del cilindro es: %.1f\n", cilindro1.radio, cilindro1.altura);
    return 0;
}