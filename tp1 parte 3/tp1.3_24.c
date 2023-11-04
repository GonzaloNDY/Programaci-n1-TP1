/*En una fábrica se registra la información del mantenimiento de las N máquinas que posee la
fábrica en una estructura como la siguiente:
struct maquina{
    int numeroMaquina;
    char sector;
    int ultimoAnioMantenimiento;
};
Se pide calcular y mostrar el porcentaje de máquinas cuyo último año de mantenimiento fue en el
2020*/

#include <stdio.h>

struct maquina{
    int numeroMaquina;
    char sector;
    int ultimoAnioMantenimiento;
};

int main( int argc, char*argv[]){
    struct maquina maquinas;
    int N, contador = 1, cantidad2020 = 0;
    printf("\nIngrese la cantidad de máquinas a registrar: ");
    do{
        scanf("%i", &N);
        if ( N <= 0 ){
            printf("Tiene que ser un número mayor a cero, ingrese una cantidad válida: ");
        }
    } while( N <= 0 );
    do{
        printf("\n\tDatos de la %iº maquina\nNúmero de maquina: ", contador);
        do{
            scanf("%i", &maquinas.numeroMaquina);
            if ( maquinas.numeroMaquina <= 0 ){
                printf("El número de maquina tiene que ser mayor a cero, ingreselo nuevamente: ");
            }
        } while( maquinas.numeroMaquina <= 0 );
        fgetc(stdin);
        printf("Sector de la maquina (ingrese solo la inicial): ");
        scanf("%c", &maquinas.sector);
        printf("Año del ultimo mantenimiento de la maquina: ");
        do{
            scanf("%i", &maquinas.ultimoAnioMantenimiento);
            if( maquinas.ultimoAnioMantenimiento < 1900 || maquinas.ultimoAnioMantenimiento > 2023 ){
                printf("Fecha erronea, ingrese el año del ultimo mantenimiento nuevamente: ");
            }
        } while( maquinas.ultimoAnioMantenimiento < 1900 || maquinas.ultimoAnioMantenimiento > 2023 );
        if( maquinas.ultimoAnioMantenimiento == 2020){
            cantidad2020++;
        }
        contador++;
    } while( N >= contador );
    printf("\nEl porcentaje de maquinas cuyo último año de mantenimiento fue en el 2020 es: %i%c\n", cantidad2020*100/N, '%');
    return 0;
}