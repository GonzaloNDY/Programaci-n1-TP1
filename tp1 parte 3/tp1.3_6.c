/*Se ingresan N números enteros, presentar el promedio de los pares y el promedio de los
impares. No considerar el número cero como número par ni como impar. Controlar que
el valor de N sea positivo*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int N, num, par=0, impar=0, iPar=0, iImpar=0;
    printf("\nIndique la cantidad de numeros a controlar:\t");
    do{
        scanf("%i", &N);
        if( N <= 0 ){
            printf("La cantidad de numeros a controlar debe ser mayor a cero, intente nuevamente:\t");
        }
    } while(N <= 0);
    printf("Ingrese los %i numeros a controlar:\n", N);
    while(N > 0){
        scanf("%i", &num);
        if(num%2==0){
            par+=num;
            iPar++;
        }else{
            impar+=num;
            iImpar++;
        }
        N--;
    }
    printf("El promedio de los numeros pares ingresados es: %i\nEl promedio de los numeros impares ingresados es: %i\n", par/iPar, impar/iImpar);
    return 0;
}