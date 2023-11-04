/*Ingresar N números (realizar el control de que N sea positivo), contabilizar cuántos números
pares e impares se encontraron, luego mostrar los resultados por pantalla. Utilizar una
estructura como la siguiente:
typedef struct{
int pares;
int impares;
}categorias;  */

#include <stdio.h>

typedef struct{
int pares;
int impares;
} categorias;

int main(int argc, char*argv){
    categorias controlParidad;
    int N, numActual;
    controlParidad.pares = 0;
    controlParidad.impares = 0;
    printf("\nIngrese la cantidad de números a controlar:\t");
    do{
        scanf("%d", &N);
        if ( N <= 0 ){
            printf("Tiene que ser un número mayor a cero, ingrese una cantidad válida:\t");
        }
    } while( N <= 0 );
    printf("Ingrese los %i números a controlar:\n", N);
    while( N > 0 ){
        scanf("%i", &numActual);
        if(numActual%2==0){
            controlParidad.pares++;
        }else{
            controlParidad.impares++;
        }
        N--;
    }
    printf("En total se ingresaron %i números pares y %i números impares\n", controlParidad.pares, controlParidad.impares);
    return 0;
}