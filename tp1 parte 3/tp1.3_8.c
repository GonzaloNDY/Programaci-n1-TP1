/*Ingresar un número entero positivo(realizar este control), luego presentar por pantalla
la cantidad de dígitos que posee dicho número*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num, dig;
    printf("\nIngrese un numero entero positivo:\t");
    do{
        scanf("%i", &num);
        if( num <= 0 ){
            printf("El numero debe ser mayor a cero, intente nuevamente:\t");
        }
    } while(num <= 0);
    for( dig=0 ; num>0 ; num/=10, dig++ ){}
    printf("El numero ingresado  tiene %i dígitos\n", dig);
    return 0;
}