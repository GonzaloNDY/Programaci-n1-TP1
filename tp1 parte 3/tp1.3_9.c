/*Dado un número natural de 4 o más dígitos(realizar este control), presentar por pantalla
el número y su invertido. Ejemplo : número = 34256, invertido = 65243*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num, invertido=0;
    printf("\nIngrese un numero entero positivo:\t");
    do{
        scanf("%i", &num);
        if( num <= 0 ){
            printf("El numero debe ser mayor a cero, intente nuevamente:\t");
        }
    } while(num <= 0);
    printf("El invertido de %i es ", num);
    while(num > 0){
        invertido=invertido*10+(num%10);
        num/=10;
    }
    printf("%i\n", invertido);
    return 0;
}