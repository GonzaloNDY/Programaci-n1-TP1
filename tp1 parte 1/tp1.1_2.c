#include <stdio.h>
int main() {
    int num1, num2;
    printf("\nIngrese dos numeros enteros:\n");
    scanf("%i %i", &num1, &num2);
    printf("\nEl producto de ambos numeros es: %i", num1 * num2);
    printf("\nLa suma de ambos numeros es: %i", num1 + num2);
    printf("\nEl promedio de ambos numeros es: %i\n", (num1 + num2) / 2);
    return 0;
}