#include <stdio.h>

int main() {
    int opcion;
    printf("\n\tPrograma de los signos del zodiaco\n\nIngrese una de las siguientes opciones:\n");
    printf("1:Aries\t\t\t2:Tauro\n3:Geminis\t\t4:Cancer\n5:Leo\t\t\t6:Virgo\n7:Libra\t\t\t8:Escorpio\n9:Sagitario\t\t10:Capricornio\n11:Acuario\t\t12:Piscis\n");
    scanf("%i", &opcion);
    switch (opcion) {
        case 1:
            printf("El signo de Aries es de Fuego\n");
            break;
        case 2:
            printf("El signo de Tauro es de Tierra\n");
            break;
        case 3:
            printf("El signo de Geminis es de Aire\n");
            break;
        case 4:
            printf("El signo de Cancer es de Agua\n");
            break;
        case 5:
            printf("El signo de Leo es de Fuego\n");
            break;
        case 6:
            printf("El signo de Virgo es de Tierra\n");
            break;
        case 7:
            printf("El signo de Libra es de Aire\n");
            break;
        case 8:
            printf("El signo de Escorpio es de Agua\n");
            break;
        case 9:
            printf("El signo de Sagitario es de Fuego\n");
            break;
        case 10:
            printf("El signo de Capricornio es de Tierra\n");
            break;
        case 11:
            printf("El signo de Acuario es de Aire\n");
            break;
        case 12:
            printf("El signo de Piscis es de Agua\n");
            break;
        default:
            printf("El valor ingresado no corresponde a una opcion valida\n");
    }
    return 0;
}