#include <stdio.h>

int main() {
    int num, i;

    do {
        printf("\nIngresar un numero positivo:\t");
        scanf("%i", &num);
    } while (num < 0);
    printf("El invertido del numero %i es:", num);
    /*while (num > 0) {
        invertido = invertido * 10 + (num % 10);
        num = num / 10;
    }*/
    for( i=0; num > 0; num/=10){
        i=i*10+(num%10);
    }
    printf(" %i\n", i);

    return 0;
}