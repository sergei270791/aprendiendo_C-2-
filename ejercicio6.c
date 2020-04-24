#include <stdio.h>

int main() {
    int numero,opcion,i=0;

    printf("Teclea la clave: ");
    scanf("%d", &numero);
    while (i<10){
        printf("\n");
        i++;
    }
    printf("Adivina un número entre 0 y 99: ");
    scanf("%d", &opcion);

    while (opcion!=numero) {
        if(opcion<numero){
            printf("Demasiado pequeño. Prueba otra vez: ");  
        }else{
            printf("Demasiado grande. Prueba otra vez: ");
        }
        scanf("%d", &opcion);
    }
    printf("¡Número correcto!");
}