#include <stdio.h>

int main() {
    FILE *f;  // Paso 1
    char dni[10];
    int modelo, i;
    double nota, media;

    f = fopen("notas.txt", "r");  // Paso 2
    if (f == NULL) {  // Paso 3
        printf("Error abriendo el archivo\n");
        return 1;
    }

    for (i=0, media=0.0; fscanf(f, "%s %d %lf", dni, &modelo, &nota) == 3; i++){// Paso 4
        media += nota;
    }
    printf("La nota media es = %.2lf\n", media/i);
    fclose(f);  // Paso 5

    return 0;
}