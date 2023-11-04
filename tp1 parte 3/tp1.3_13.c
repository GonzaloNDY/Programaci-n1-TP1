/*Diseñar un programa que permita ingresar un número entero positivo de 2 o más dígitos (realizar el control). Determinar 
la suma de los dígitos del número que sean impares. Presentar por pantalla el resultado en el programa principal*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num, sumaCifrasI=0;
    printf("\nIngrese un numero positivo de dos o más digitos:\t");
    do{
        scanf("%d", &num);
        if( num < 10 ){
            printf("El numero debe ser positivo y de 2 o mas cifras, intente nuevamente:\t");
        }
    } while( num < 10 );
    while( num > 0 ){
        if( num%2 != 0 ){
            sumaCifrasI += (num%10);
        }
        num/=10;
    }
    printf("La suma de las cifras impares del numero ingresado es: %d\n", sumaCifrasI);
    return 0;
}