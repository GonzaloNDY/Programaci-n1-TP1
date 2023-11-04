/*Ingresar un número entero positivo(Controlar que el valor sea positivo) e indicar si es
primo o no*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num, i=2, control_primo=1;
    printf("\nIngrese un numero entero positivo:\t");
    do{
        scanf("%i", &num);
        if( num <= 0 ){
            printf("El numero debe ser mayor a cero, intente nuevamente:\t");
        }
    } while(num <= 0);
    while(num > i){
        if(num%i == 0){
            control_primo++;
        }
        i++;
    }
    if(control_primo == 1){
        printf("El número ingresado es primo\n");
    }else{
        printf("El número ingresado no es primo\n");
    }

    return 0;
}