/*Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos son
negativos y cuantos iguales a cero*/

#include <stdio.h>

int main() {
    int N, num, par = 0, impar = 0, cero = 0;
    printf("\nIndique la cantidad de numeros que ingresará:\t");
    do {
        scanf("%i", &N);
        if (N <= 0) {
            printf("El valor ingresado tiene que ser mayor a cero, ingrese nuevamente:\t");
        }
    } while (N <= 0);
    printf("Ingrese los numerosa controlar:\n");
    while (N > 0) {
        scanf("%i", &num);
        if (num == 0) {
            cero++;
        } else if (num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
        N--;
    }
    printf("Se ingresaron %i numeros pares, %i impares y %i ceros\n", par, impar, cero);
    return 0;
}