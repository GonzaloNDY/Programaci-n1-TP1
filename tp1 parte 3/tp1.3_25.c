/*Se deben guardar los datos de N personas. Mostrar por pantalla el número de teléfono (Por ej
"caracteristica - numero") de la persona que sea más grande. Utilizar una estructura como la
siguiente:
typedef struct{
int caracteristica;
int numero;
}telefono;
typedef struct{
int dni;
int edad;
telefono tel;
}persona;  */

#include <stdio.h>

typedef struct{
    int caracteristica;
    int numero;
}telefono;

typedef struct{
    int dni;
    int edad;
    telefono tel;
}persona; 

int main(int argc, char*argv[]){
    persona unaPersona, personaMayor;
    int N, i = 1,  mayor = -2147483647;
    printf("\nIngrese la cantidad de personas a registrar: ");
    do{
        scanf("%i", &N);
        if ( N <= 0 ){
            printf("Tiene que ser un número mayor a cero, ingrese una cantidad válida: ");
        }
    } while( N <= 0 );
    while( N >= i ){
        printf("\n\tDatos de la %iº persona\nDNI: ", i );
        do{
            scanf("%i", &unaPersona.dni);
            if( unaPersona.dni < 10000000 || unaPersona.dni > 99999999 ){
                printf("Ingrese un número de DNI válido: ");
            }
        } while( unaPersona.dni < 10000000 || unaPersona.dni > 99999999 );
        printf("Edad: ");
        do{
            scanf("%i", &unaPersona.edad);
            if( unaPersona.edad <= 0 || unaPersona.edad > 123 ){
                printf("Edad falsa, ingrese una edad válida: ");
            }
        } while( unaPersona.edad <= 0 || unaPersona.edad > 123 );
        printf("\tNúmero de teléfono\nCódigo de area: ");
        do{
            scanf("%i", &unaPersona.tel.caracteristica);
            if( unaPersona.tel.caracteristica < 100 && unaPersona.tel.caracteristica > 9999 ){
                printf("Código de area erroneo, ingrese un codigo de area válido: ");
            }
        } while( unaPersona.tel.caracteristica < 10 && unaPersona.tel.caracteristica > 999 );
        printf("Número telefónico (sin el 15): ");
        do{
            scanf("%d", &unaPersona.tel.numero);
            if( unaPersona.tel.numero < 100000 && unaPersona.tel.caracteristica > 99999999 ){
                printf("Número telefónico erroneo, ingrese uno válido: ");
            }
        } while( unaPersona.tel.numero < 100000 && unaPersona.tel.numero > 99999999 );
        if( unaPersona.edad > mayor){
            mayor = unaPersona.edad;
            personaMayor = unaPersona;
        }
        i++;
    } 
    printf("\n\t  El número telefónico de la persona mas grande es (%i)-%i\n", personaMayor.tel.caracteristica, personaMayor.tel.numero);
    return 0;
}