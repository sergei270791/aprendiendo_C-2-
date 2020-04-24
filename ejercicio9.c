#include <stdio.h>
#define DIM 10

int main() {
    int i=0, suma=0, total, tabla[DIM];

    printf("¿Cuántos elementos quieres mostrar por pantalla? Elige un número entre 1 y %d: ", DIM);
    do
    {
        scanf("%d", &total);
        if(total<1 || total>10){    
            printf("El número introducido no es correcto, vuelve a intentarlo: ");

        }
    } while (total<1 || total>10);
    
    while(i<total) {
        tabla[i]=2*(i+1);
        i++;
    }
    i=0;
    while(i<total) {
        printf("%d ", tabla[i]);
        i++;
    }

    return 0;
}