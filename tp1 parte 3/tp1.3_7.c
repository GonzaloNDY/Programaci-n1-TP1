/*Se ingresan N números enteros. Determinar el mayor y el menor de los valores ingresados
Ejemplo: N = 7, se ingresan: -12, 5, -8, 30, 0, -20, 15 Mayor valor:30 Menor valor:-2
Controlar que el valor de N sea positivo*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int N, num, mayor=-9999999, menor=99999999;
    printf("\nIndique la cantidad de numeros a controlar:\t");
    do{
        scanf("%i", &N);
        if( N <= 0 ){
            printf("La cantidad de numeros a controlar debe ser mayor a cero, intente nuevamente:\t");
        }
    } while(N <= 0);
    printf("Ingrese los numeros:\n");
    while(N>0){
        scanf("%i", &num);
        if(num>mayor){
            mayor=num;
        }
        if(num<menor){
            menor=num;
        }
        N--;
    }
    printf("El mayor numnero ingresado es: %i\nEl menor numero ingresado es: %i\n", mayor, menor);
    return 0;
}