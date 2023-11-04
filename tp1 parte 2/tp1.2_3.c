#include <stdio.h>

int main() {
    int num;
    printf("\nIngresar un numero entero:\t");
    scanf("%i", &num);
    if (num == 0) {
        printf("El numero ingresado es cero\n");
    } else if (num > 0) {
        printf("El numero ingresado es positivo\n");
    } else {
        printf("El numero ingresado es negativo\n");
    }
    return 0;
}