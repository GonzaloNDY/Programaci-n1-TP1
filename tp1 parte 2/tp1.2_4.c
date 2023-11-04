#include <stdio.h>

int main() {
    int num1, num2;
    printf("\nIngresar dos numeros enteros:\n");
    scanf("%i %i", &num1, &num2);
    if (num1 < num2) {
        printf("Los numeros fueron ingresados en forma creciente\n");
    } else if (num1 > num2) {
        printf("Los numeros fueron ingresados en forma decreciente\n");
    } else {
        printf("Los numeros ingresados son iguales\n");
    }
    return 0;
}