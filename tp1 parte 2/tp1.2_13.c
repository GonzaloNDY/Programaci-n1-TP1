#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("\nIngresar un numero:\t");
    scanf("%i", &num);
    printf("El factorial del numero %i", num);
    do {
        factorial = factorial * num;
        num--;
    } while (num > 0);
    printf(" es: %i\n", factorial);
    return 0;
}