#include <stdio.h>

int main() {
    float num1, num2;
    printf("\nIngresar dos numeros reales:\n");
    scanf("%f %f", &num1, &num2);
    printf("la suma de ambos numeros es: %1.f\nEl producto de ambos numeros es: %1.f\n", num1 + num2, num1 * num2);
    return 0;
}