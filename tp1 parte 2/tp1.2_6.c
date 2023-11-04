#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("\nIngresar tres numeros enteros:\n");
    scanf("%i %i %i", &num1, &num2, &num3);
    printf("los numeros ingresados, ordenados en forma ascendente son:\t");
    if (num1 < num2 && num2 < num3 || num1 < num2 && num2 == num3 || num1 == num2 && num2 < num3) {
        printf("%i  %i  %i\n", num1, num2, num3);
    } else if (num1 < num3 && num3 < num2 || num1 < num2 && num2 == num3 || num1 == num3 && num3 < num2) {
        printf("%i  %i  %i\n", num1, num3, num2);
    } else if (num2 < num1 && num1 < num3 || num2 < num1 && num1 == num3 || num2 == num1 && num1 < num3) {
        printf("%i  %i  %i\n", num2, num1, num3);
    } else if (num2 < num3 && num3 < num1 || num2 < num3 && num3 == num1 || num2 == num3 && num3 < num1) {
        printf("%i  %i  %i\n", num2, num3, num1);
    } else if (num3 < num1 && num1 < num2 || num3 < num1 && num1 == num2 || num3 == num1 && num1 < num2) {
        printf("%i  %i  %i\n", num3, num1, num2);
    } else if (num3 < num2 && num2 < num1 || num3 < num2 && num2 == num1 || num3 == num2 && num2 < num1) {
        printf("%i  %i  %i\n", num3, num2, num1);
    } else {
        printf("Son iguales\n");
    }
    return 0;
}