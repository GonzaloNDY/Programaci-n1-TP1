#include <stdio.h>

int main() {
    int num1, num2, num3, num4;
    printf("\nIngrese cuatro numeros enteros:\n");
    scanf("%i %i %i %i", &num1, &num2, &num3, &num4);
    printf("\nEl promedio de esos 4 numeros es: %i\n", (num1 + num2 + num3 + num4) / 4);
    return 0;
}