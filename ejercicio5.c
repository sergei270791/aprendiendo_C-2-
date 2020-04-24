#include <stdio.h>

int main() {
    int opcion;
    float euros,yenes,dolares,libras;
    printf("Introduce una cantidad en euros: ");
    scanf("%f",&euros);
    printf("Selecciona una opción:\n  1. Dólar\n  2. Yen japonés\n  3. Libra esterlina\n "); 
    scanf("%d", &opcion);
    dolares=1.08*euros;
    yenes=115.87 *euros;
    libras=0.87*euros;
    switch (opcion) {
        case 1:        
            printf("%.2f euros son %.2f dolares.",euros,dolares); 
            break;
        case 2:
            printf("%.2f euros son %.2f yenes.",euros,yenes);
            break;
        case 3:
            printf("%.2f euros son %.2f libras.",euros,libras);
            break;

    }

    return 0;
}