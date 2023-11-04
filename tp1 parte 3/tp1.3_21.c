/*Codificar un programa para: ingresar dos números N y D enteros positivos. Debe realizar el control
del ingreso de datos, luego calcular el valor del cociente y resto entre N y D utilizando el método de 
restas sucesivas. Para almacenar y mostrar por pantalla el resultado utilizar la siguiente estructura:
struct dividir{
float cociente;
int resto;
};  */

#include <stdio.h>

struct dividir{
float cociente;
int resto;
};

int main(int argc, char*argv[]){
    struct dividir division;
    int dividendo, divisor, aux;
    printf("\nIngrese un numero natural:\t");
    do{
        scanf("%i", &dividendo);
        if ( dividendo < 0 ){
            printf("el numero debe ser positivo, intente nuevamente:\t");
        }
    } while ( dividendo < 0 );
    printf("Ingrese un numero natural mayor a cero:\t");
    do{
        scanf("%i", &divisor);
        if ( divisor <= 0 ){
            printf("El segundo numero tiene que ser mayor a cero, intente nuevamente:\t");
        }
    } while ( divisor <= 0 );
    aux = dividendo;
    for( division.cociente = 0 ; aux > divisor ; division.cociente++ , aux -= divisor ){}
    division.resto = aux % divisor;
    printf("El cociente de %i/%i es: %0.f", dividendo, divisor, division.cociente);
    if( division.cociente == 0 ){
        printf(" (porque %i/%i es una fracción impropia)", dividendo, divisor);
    }
    printf(". Por lo tanto el resto de %i/%i es: %i\n", dividendo, divisor, division.resto);
    return 0;
}