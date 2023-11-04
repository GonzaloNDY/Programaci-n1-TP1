/*Presentar por pantalla las letras que estén entre la "a" y la ''m" utilizando una estructura
"for". No mostrar la a y m solo las intermedias*/

#include <stdio.h>

int main(int argc, char*argv[]){
    printf("\nLas letras que estan entre la a y la m son:\n");
    for(char letra='b'; letra < 'm'; letra++){
        printf("%c\t", letra);
    }
    printf("\n");
    return 0;
}