#include <stdio.h>

#define TAM 16

int main() {
    FILE *fEntrada, *fModelo1, *fModelo2;
    char entrada[TAM]="notas.txt", modelo1[TAM]="modelo1.csv", modelo2[TAM]="modelo2.csv", dni[TAM];
    int modelo;
    double nota;
   
    if ((fEntrada = fopen(entrada, "r")) == NULL) {
        printf("Error abriendo el archivo %s.\n", entrada);
        return 1;
    }

    if ((fModelo1 = fopen(modelo1, "w")) == NULL) {
        printf("Error abriendo el archivo %s.\n", modelo1);
        fclose(fEntrada);
        return 1;
    }

    if ((fModelo2 = fopen(modelo2, "w")) == NULL) {
        printf("Error abriendo el archivo %s.\n", modelo2);
        fclose(fEntrada);
        fclose(fModelo1);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %lf", dni, &modelo, &nota) == 3) {
        if (modelo == 1)
            fprintf(fModelo1, "%s,%.2lf\n", dni, nota);
        else
            fprintf(fModelo2, "%s,%.2lf\n", dni, nota);
    }

    fclose(fEntrada);
    fclose(fModelo1);
    fclose(fModelo2);

    return 0;
}