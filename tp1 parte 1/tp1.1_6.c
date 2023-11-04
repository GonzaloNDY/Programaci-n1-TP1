#include <stdio.h>

int main() {
    float num1, num2;
    printf("\nIngrese dos numeros reales:\n");
    scanf("%f %f", &num1, &num2);
    printf("\nla suma de ambos numeros es: %.1f\nEl producto de ambos numeros es: %.1f\n", num1 + num2, num1 * num2);
    return 0;
}