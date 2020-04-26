#include <stdio.h>
#include <string.h>
#define TAM 16
int main() {
    FILE *fEntrada,*fModelo1;
    char entrada[TAM]="listado.txt",modelo1[TAM]="listado.txt", dni[TAM], calificacion[TAM];
    double nota,suma=0.0;
    if ((fModelo1 = fopen(modelo1, "r")) == NULL) {
        printf("Error abriendo el archivo %s.\n", modelo1);
        fclose(fEntrada);
        return 1;
    }
    if ((fEntrada = fopen(entrada, "a")) == NULL) {
        printf("Error abriendo el archivo %s.\n", entrada);
        return 1;
    }
    
    while (fscanf(fModelo1, "%s %lf %s", dni,&nota,calificacion) == 3) {
        suma+=nota;    
    }
    fprintf(fEntrada,"La nota media es: %.2lf",suma/71);
    fclose(fEntrada);
    fclose(fModelo1);


    return 0;
}
