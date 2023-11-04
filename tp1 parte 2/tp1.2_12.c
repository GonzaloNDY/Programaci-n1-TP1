#include <stdio.h>

int main() {
    int n;
    printf("\nIngresar la cantidad de numeros impares que se mostraran en pantalla:\t");
    do {
        scanf("%i", &n);
        if (n < 0) {
            printf("Tiene que ser un valor positivo, ingrese  la cantidad nuevamente:\t");
        }
    } while (n < 0);
    for (int i = 1; n > 0; i += 2, n--) {
        printf("%i\n", i);
    }
    return 0;
}