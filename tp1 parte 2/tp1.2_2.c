#include <stdio.h>

int main() {
    float radio, pi = 3.14;
    do {
        printf("\nIngresar el radio de un circulo:\t");
        scanf("%f", &radio);
        if (radio < 0) {
            printf("El valor del radio tiene que ser un numero positivo, intente nuevamente:\t");
            scanf("%f", &radio);
        }
    } while (radio < 0);
    printf("El diametro del circulo de radio %.1f es: %1.f", radio, 2 * radio);
    printf("\nEl perimetro del circulo de radio %.1f es: %1.f", radio, 2 * pi * radio);
    printf("\nEl area del circulo de radio %.1f es: %1.f\n", radio, pi * radio * radio);
    return 0;
}