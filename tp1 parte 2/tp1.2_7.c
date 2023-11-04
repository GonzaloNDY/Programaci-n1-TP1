#include <stdio.h>

int main() {
    int num;
    printf("\nIngresar un numero entero no negativo:\t");
    scanf("%i", &num);
    while (num < 0) {
        printf("El numero tiene que ser igual o mayor que cero, ingrese nuevamente:\t");
        scanf("%i", &num);
    }
    if (num % 2 == 0) {
        printf("El numero ingresado es par\n");
    } else {
        printf("El numero ingresado es impar\n");
    }
    return 0;
}