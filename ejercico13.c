#include <stdio.h>
#include <string.h>
#define DIM 100
int main() {
    int i;
    char palabra[DIM];
    printf("Introduce una cadena de caracteres: ");
    scanf("%s",palabra);
    printf("La cadena camino tiene una longitud de %d caracteres y la mitad es la posición %d.\n",strlen(palabra),strlen(palabra)/2);
    printf("La segunda mitad de la cadena %s es ",palabra);
    for (i=strlen(palabra)/2; i<strlen(palabra); i++) {
        printf("%c",palabra[i]);
    }
    printf(".");

    return 0;
}