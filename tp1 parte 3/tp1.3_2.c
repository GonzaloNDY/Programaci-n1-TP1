/*Ingresar 3 carácteres por teclado y luego presentar por pantalla un mensaje con la
siguiente leyenda "Los carácteres ingresados son …(mostrar los carácteres ingresados)*/

#include <stdio.h>

int main(int argc, char*argv[]){
    char car1, car2, car3;
    printf("\nIngrese 3 caracteres(en caso de ingresar mas de lo solicitado, solo se tomaran los primeros 3): ");
    scanf("%c", &car1);
    fgetc(stdin);
    scanf("%c", &car2);
    fgetc(stdin);
    scanf("%c", &car3);
    printf("Los caracteres ingresados son: %c, %c y %c\n", car1, car2, car3);
    return 0;
}