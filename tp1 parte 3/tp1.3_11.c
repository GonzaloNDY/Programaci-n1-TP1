/*Dados N1 menor que N2 (realizar este control), diseñar un programa que sume los números enteros 
comprendidos entre N1 y N2. Presentar por pantalla dicha suma. Ejemplo: N1 = 6, N2 = 12; Suma = 45*/

#include <stdio.h>

int main(int argc, char*argv[]){
    int n1, n2, suma=0;
    printf("\n\t\tPrograma para sumar enteros comprendidos entre dos numeros\n\nIngrese el primer numero:\t");
    scanf("%i", &n1);
    printf("Ingrese el segundo numero:\t");
    do{
        scanf("%i", &n2);
        if( n2 <= n1 ){
            printf("El segundo numero debe ser mayor al primero, ingrese el segundo nuevamente:\t");
        }
    } while(n2 <= n1);
    printf("\nLa suma de los numeros comprendidos entre %i y %i es: %i", n1, n2, n1);
    while( n2 >= n1 ){
        suma+=n1;
        n1++;
        if( n1 <= n2 ){
            printf(" + %i", n1);
        }
    }
    printf(" = %i\n", suma);
    return 0;
}