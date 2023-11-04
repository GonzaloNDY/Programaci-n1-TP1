/*Ingresar un número entero (controlar que no sea negativo), presentar por pantalla, en el programa principal
un mensaje que indique si el mismo tiene formato binario, es decir que solo estéconformado por 1 o 0*/

#include <stdio.h>

int main(int argc, char *argv[]){
    int num, cifra, aux = 0;
    printf("\nIngrese un numero positivo:\t");
    do{
        scanf("%d", &num);
        if (num < 0){
            printf("El numero debe ser mayor a cero:\t");
        }
    } while (num < 0);
    while (num > 0){
        if (num % 10 != 0 && num % 10 != 1){
            aux++;
        }
        num /= 10;
    }
    if (aux == 0){
        printf("El numero ingresado tiene formato binario\n");
    }
    else{
        printf("El numero ingresado no tiene formato binario\n");
    }
    return 0;
}