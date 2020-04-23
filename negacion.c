#include <stdio.h>

int main() {
    int x=3;
 
    printf("Recuerda: la operación devuelve 1 si se cumple (true) y 0 si no se cumple (false)\n");

    printf("El resultado de evaluar !(x<2) es: %d\n", !(x<2));

    printf("El resultado de evaluar !x y x==0 es el mismo: %d y %d\n", !x, x==0);
 
    printf("El resultado de evaluar !(x%2) y x%2==0 es el mismo: %d y %d\n", !(x%2), x%2==0);
 
    printf("El resultado de evaluar x y x!=0 es el mismo.\n");

    printf("El resultado de evaluar x%2 y x%2!=0 es el mismo: %d y %d\n", x%2, x%2!=0);

    return 0;
}