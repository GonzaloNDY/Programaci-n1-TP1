/*Definir una estructura cuyos campos permitan guardar la cantidad de caracteres que sean
vocal y la cantidad que sean consonante. Luego debe ingresar N caracteres, y contabilizar en
la estructura definida los caracteres de acuerdo a su tipo (vocal o consonante)*/

#include <stdio.h>

typedef struct{
    int consonante;
    int vocal;
}letras;

int main(int argc, char*argv[]){
    letras letra;
    int cantidad;
    char caracterActual;
    letra.consonante = 0;
    letra.vocal = 0;
    printf("\nIndique la cantidad de caracteres que registrará:\t");
    do{
        scanf("%i", &cantidad);
        if ( cantidad <= 0 ){
            printf("La cantidad debe ser mayor a cero, intente nuevamente:\t");
        }
    } while ( cantidad <= 0 );
    fgetc(stdin);
    for( int i = 1 ; cantidad >= i ; i++ ){
        printf("\nIngrese el %i° caracter:\t", i);
        scanf("%c", &caracterActual);
        fgetc(stdin);
        if( caracterActual == 'a' || caracterActual == 'e' || caracterActual == 'i' || caracterActual == 'o' || caracterActual == 'u' || caracterActual == 'A' || caracterActual == 'E' || caracterActual == 'I' || caracterActual == 'O' || caracterActual == 'U'){
            letra.vocal++;
            printf("El caracter \"%c\" es una vocal\n", caracterActual);
        }else if ( caracterActual >= 'b' && caracterActual <= 'z' || caracterActual >= 'B' && caracterActual <= 'Z'){
            letra.consonante++;
            printf("El caracter \"%c\" es una consonante\n", caracterActual);
        }else{
            printf("El caracter \"%c\" no es consonante ni vocal\n", caracterActual);
        }
    }
    printf("\nDe los %i caracteres ingresados, %i son vocales, %i son consonantes y %i son numeros, signos o símbolos.\n", cantidad, letra.vocal, letra.consonante, cantidad-(letra.vocal+letra.consonante));
    return 0;
}