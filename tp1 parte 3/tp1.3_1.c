/*Leer un carácter por teclado y luego presentar por pantalla un mensaje con la siguiente
leyenda "El carácter es …(mostrar el carácter ingresado)*/

#include <stdio.h>

int main(int argc, char*argv[]){
    char letra;
    printf("\nIngrese un caracter: ");
    scanf("%c", &letra);
    printf("El carácter es: %c\n", letra);
    return 0;
}