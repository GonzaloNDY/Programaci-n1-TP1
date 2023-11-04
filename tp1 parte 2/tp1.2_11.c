#include <stdio.h>

int main() {
    int i = 2;
    do {
        printf("\n%i", i);
        i += 2;
    } while (i <= 40);
    printf("\n");
    return 0;
}