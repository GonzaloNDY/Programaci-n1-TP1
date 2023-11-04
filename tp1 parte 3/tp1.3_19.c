/*Implementar un programa en el que se ingresan los datos de N personas. Calcular y presentar
por pantalla el promedio de edades de las personas ingresadas. Utilizar la estructura en la que se
represente la inicial del apellido y del nombre (1 caracter para cada uno) y la edad de una
persona. Controlar que la edad sea un valor positivo.
struct persona {
char nombre;
char apellido;
int edad;
};  */

#include <stdio.h>

struct persona {
char nombre;
char apellido;
int edad;
};

int main(int argc, char*argv[]){
    struct persona unaPersona;
    int n, sumaEdades = 0 , i=1;
    printf("\nIndique la cantidad de personas que registrará:\t");
    do{
        scanf("%i", &n);
        if ( n <= 0 ){
            printf("La cantidad debe ser mayor a cero, intente nuevamente:\t");
        }
    } while ( n <= 0 );
    while( n >= i ){
        fgetc(stdin);
        printf("\n\tPersona %i\nInicial del nombre:\t", i);
        scanf("%c", &unaPersona.nombre);
        fgetc(stdin);
        printf("Inicial del apellido:\t");
        scanf("%c", &unaPersona.apellido);
        printf("Edad:\t");
        scanf("%i", &unaPersona.edad);
        sumaEdades += unaPersona.edad;
        i++;
    }
    printf("\nEl promedio de edades de las personas registradas es: %i\n", sumaEdades/n);
    return 0;
}