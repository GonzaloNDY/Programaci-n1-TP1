/* Diseñar un programa que permita el ingreso de dos números enteros positivos y
calcular el producto de dichos números utilizando el método de sumas sucesivas*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num1, num2, producto=0, i=0;
    printf("\n\t\tPrograma para calcular el producto de dos numeros naturales\n\nIngrese el primer numero:\t");
    do{
        scanf("%i", &num1);
        if( num1 < 0 ){
            printf("El numero debe ser positivo, intente nuevamente:\t");
        }
    } while(num1 < 0);
    printf("Ingrese el segundo numero:\t");
    do{
        scanf("%i", &num2);
        if( num2 < 0 ){
            printf("El numero debe ser positivo, intente nuevamente:\t");
        }
    } while(num2 < 0);
  //for(int i=0 ; i<num2 ; i++, producto+=num1){}
    while( i < num2 && num1 > 0 ){
        producto+=num1;
        i++;
    }
    printf("El producto de los numeros %i y %i es: %i\n", num1, num2, producto);
    return 0;
}