/*Modificar el programa anterior para añadir un campo en la estructura teléfono que almacene un
carácter dependiendo si es un teléfono fijo o un celular. Podrá almacenar un carácter 'F' si es fijo
o 'C' si es un celular, en caso de ingresar otro carácter volver a solicitar su ingreso.
Modificar el programa para que muestre por pantalla el número de celular, indicando si es un un
número FIJO o CELULAR, de la persona que sea más grande en edad*/
//Inclusión de bibliotecas a usar:
#include <stdio.h>
//Declaración de estructuras para guardar los datos de las personas:
typedef struct{
    int caracteristica;
    int numero;
    char cel_o_fijo;
}telefono;
typedef struct{
    int dni;
    int edad;
    telefono tel;  //struct anidado
}persona;
//Función principal:
int main(int argc, char*argv[]){
    //Declaración de variables necesarias para el programa:
    persona unaPersona, personaMayor;
    int N, i = 1, numPersonaMayor;
    personaMayor.edad = -2147483647;
    //Ingreso y control para que la cantidad de personas sea mayor a cero:
    printf("\nIngrese la cantidad de personas a registrar: ");
    do{
        scanf("%i", &N);
        if (N <= 0){
            printf("Tiene que ser un número mayor a cero, ingrese una cantidad válida: ");
        }
    } while (N <= 0);
    //Bucle para el ingreso y control de los datos de las personas a registrar:
    while( N >= i ){
        //Ingreso y control del dni:
        printf("\n\tDatos de la %iº persona\nDNI: ", i );
        do{
            scanf("%i", &unaPersona.dni);
            if (unaPersona.dni < 10000000 || unaPersona.dni > 99999999){
                printf("Ingrese un número de DNI válido: ");
            }
        } while (unaPersona.dni < 10000000 || unaPersona.dni > 99999999);
        //Ingreso y control de la edad:
        printf("Edad: ");
        do{
            scanf("%i", &unaPersona.edad);
            if (unaPersona.edad <= 0 || unaPersona.edad > 123){
                printf("Edad falsa, ingrese una edad válida: ");
            }
        } while (unaPersona.edad <= 0 || unaPersona.edad > 123);
        //Ingreso y control del tipo de teléfono:
        printf("Datos del teléfono\nIngrese \"F\" si es un teléfono fijo y \"C\" si es un celular: ");
        do{
            fgetc(stdin);
            scanf("%c", &unaPersona.tel.cel_o_fijo);
            if (unaPersona.tel.cel_o_fijo != 'c' && unaPersona.tel.cel_o_fijo != 'C' && unaPersona.tel.cel_o_fijo != 'f' && unaPersona.tel.cel_o_fijo != 'F'){
                printf("Opción incorrecta, ingrese \"F\" si es un teléfono fijo y \"C\" si es un celular: ");
            }
        } while (unaPersona.tel.cel_o_fijo != 'c' && unaPersona.tel.cel_o_fijo != 'C' && unaPersona.tel.cel_o_fijo != 'f' && unaPersona.tel.cel_o_fijo != 'F');
        //Ingreso y control del codigo de area del teléfono:
        printf("Código de area: ");
        do{
            scanf("%i", &unaPersona.tel.caracteristica);
            if (unaPersona.tel.caracteristica < 10 || unaPersona.tel.caracteristica > 999){
                printf("Código de area erroneo, ingrese un codigo de area válido: ");
            }
        } while (unaPersona.tel.caracteristica < 10 || unaPersona.tel.caracteristica > 999);
        //Ingreso y control del número de teléfono:
        printf("Número telefónico (sin el 15): ");
        do{
            scanf("%d", &unaPersona.tel.numero);
            if (unaPersona.tel.numero < 100000 || unaPersona.tel.numero > 9999999){
                printf("Número telefónico erroneo, ingrese uno válido: ");
            }
        } while (unaPersona.tel.numero < 100000 || unaPersona.tel.numero > 9999999);
        //Seleccion y guardado de los datos de la persona mas grande:
        if( unaPersona.edad > personaMayor.edad){
            personaMayor = unaPersona;
            numPersonaMayor = i;
        }
        i++;
    }//Fin del bucle, a continuación se muestran los datos de la persona mas grande:
    printf("\nLa persona mas grande es la %iº, de %i años de edad, con DNI: %i", numPersonaMayor, personaMayor.edad, personaMayor.dni);
    printf("\n\tNúmero telefónico: (%i)-%i. ", personaMayor.tel.caracteristica, personaMayor.tel.numero);
    if (personaMayor.tel.cel_o_fijo == 'f' || personaMayor.tel.cel_o_fijo == 'F'){    
        printf("Es un teléfono fijo\n");
    } else{
        printf("Es un celular\n");
    }
    return 0;
}//Fin del programa