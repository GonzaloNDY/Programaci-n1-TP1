#include <stdio.h>

int main() {
    float num, i = 0;
    printf("\nIngrese numeros:\n");
    do {
        scanf("%f", &num);
        i++;
    } while (num != 0);
    printf("En total se ingresaron %.0f numeros\n", i);
    return 0;
}