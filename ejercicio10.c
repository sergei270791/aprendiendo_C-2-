#include <stdio.h>
#define DIM 10

int main() {
    int i=0, suma=0, total, tabla[DIM];

    printf("¿Cuántos números quieres comparar? Elige un número entre 2 y %d: ", DIM);
    do
    {
        scanf("%d", &total);
        if(total<2 || total>10){    
            printf("El número introducido no es correcto, vuelve a intentarlo: ");
        }
    } while (total<2 || total>10);

    while(i<total) {
        printf("Introduce el número %d de %d: ",i+1,total);
        scanf("%d",&tabla[i]);
        i++;
    }
    i=0;
    while (i<total)
    {
        if(tabla[i]<tabla[total-1]){
            printf("El número %.2f es menor que el número %.2f\n",(float)tabla[i],(float)tabla[total-1]);    
        }
        i++;
    }
    

    return 0;
}