/*Dado un número natural de 4 dígitos(realizar este control), presentar por pantalla todos
sus divisores*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int num;
    printf("\nIngrese un numero positivo de dos o más digitos:\t");
    do{
        scanf("%i", &num);
        if( num < 1000 || num > 9999 ){
            printf("El numero debe ser positivo y de 4 cifras, intente nuevamente:\t");
        }
    } while( num < 1000 );
    printf("Los divisores del numero %i son:\n", num);
    for( int i=1 ; i <= num ; i++ ){
        if( num%i == 0 ){
            printf("%i\t", i);
        }
    }
    printf("\n");
    return 0;
}