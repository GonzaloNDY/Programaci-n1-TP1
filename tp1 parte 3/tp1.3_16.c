/* Ingresar un número entero positivo X de UN SOLO DÍGITO. Luego ingresar un número entero positivo de dos o 
más dígitos.Realizar ambos controles. Presentar por pantalla la cantidad de veces que el dígito X aparece en 
el número. Ejemplo: X=7, se ingresa: 327578 Salida por pantalla: "Aparece 2 veces"*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int unDigito, num, control = 0 ;
    printf("\nIngrese un numero positivo menor a 10:\t");
    do{
        scanf("%i", &unDigito);
        if ( unDigito < 0 || unDigito > 9 ){
            printf("El numero debe ser positivo y menor a 10:\t");
        }
    } while ( unDigito < 0 || unDigito > 10 );
    printf("Ingrese un numero positivo de dos o mas dígitos:\t");
    do{
        scanf("%i", &num);
        if ( num < 10 ){
            printf("El numero debe ser mayor o igual a 10:\t");
        }
    } while ( num < 10 );
    while ( num > 0 ){
        if ( num % 10 == unDigito ){
            control++;
        }
        num /= 10;
    }
    printf("El dígito %i aparece %i veces\n", unDigito, control);
    return 0;
}