#include <stdio.h>
#include <string.h>
#define TAM 16

int main() {
    FILE *fEntrada, *fModelo1;
    char entrada[TAM]="notas2.txt", modelo1[TAM]="listado.txt" ,dni[TAM],calificacion[TAM];
    int modelo,aciertos,fallos,blanco;
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

    while (fscanf(fEntrada, "%s %d %d %d %d %lf", dni, &modelo,&aciertos,&fallos,&blanco, &nota) == 6) {
        
        fprintf(fModelo1, "%s %.3lf ", dni, nota);
        if(nota<5){
            strcpy(calificacion,"Suspenso");
        }else if(nota<7){
            strcpy(calificacion,"Aprobado");
        }else if(nota<9){
            strcpy(calificacion,"Notable");
        }else if(nota<10){
            strcpy(calificacion,"Sobresaliente");
        }else{
            strcpy(calificacion,"Matrícula");
        }
        fprintf(fModelo1, "%s\n", calificacion);

        
    }

    fclose(fEntrada);
    fclose(fModelo1);

    return 0;
}
