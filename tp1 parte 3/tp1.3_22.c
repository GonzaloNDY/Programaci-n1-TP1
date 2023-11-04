/*Ingresar números positivos, la carga debe terminar cuando se ingrese un cero; luego presentar
por pantalla el menor valor de los números ingresados, indicando el orden en que ingresaron.
Utilizar una estructura como la siguiente para almacenar los resultados:
typedef struct{
int valor;
int posicion;
}num;  */

#include <stdio.h>

typedef struct{
int valor;
int posicion;
}num;

int main(int argc, char*argv[]){
    num numMenor;
    int numActual, contador = 1, repetido = 0;
    numMenor.valor = 2147483647;
    numMenor.posicion = 0;
    printf("\nIngrese los números a controlar (para finalizar el programa ingrese \"0\"):\n");
    do{
        scanf("%d", &numActual);
        if ( numActual < 0 ){
            printf("El numero debe ser positivo, ingrese un valor distinto: ");
        } else if( numActual == 2147483647 ){
            printf("Tenga en cuenta que el mayor numero soportado por este programa es el 2147483647, ingrese un valor distinto: "); 
        } else if( numActual < numMenor.valor && numActual != 0){
            numMenor.valor = numActual;
            numMenor.posicion = contador;
        } else if( numActual == numMenor.valor ){
            repetido++;
        }
        contador++;
    } while( numActual != 0 );
    if( numMenor.posicion == 0 ){
        printf("El programa finalizó sin que se ingrese ningun numero válido que controlar");
    } else{
        printf("El menor de los valores ingresados, sin incluir el cero y los numeros negativos, es \"%d\", fue el %iº numero ingresado ", numMenor.valor, numMenor.posicion);
        if( repetido == 1){
            printf("y se repitió %i vez durante la ejecucion del programa", repetido);
        } else if( repetido > 1 ){
            printf("y se repitió %i veces durante la ejecucion del programa", repetido);
        }
    }
    printf("\n");
    return 0;
}
