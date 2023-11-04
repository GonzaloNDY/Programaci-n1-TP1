/*Ingresar N caracteres, luego presentar por pantalla la cantidad de vocales*/

#include <stdio.h>

int main(int argc, char*argv[]){
    char letra;
    int N, vocal=0;
    printf("\nIndique la cantidad de caracteres que ingresará:\t");
    do{
        scanf("%i", &N);
        if ( N < 0 ){
            printf("La cantidad debe ser mayor a cero, intente nuevamente:\t");
        }
    } while ( N < 0 );
    printf("Ingrese los %i caracteres a controlar:\n", N);
    while( N > 0 ){
        fgetc(stdin);
        scanf("%c", &letra);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
            vocal++;
        }
        N--;
    }
    printf("Se ingresaron %i vocales en total\n", vocal);
    return 0;
}