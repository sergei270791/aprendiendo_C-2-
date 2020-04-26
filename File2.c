#include <stdio.h>

#define NESTUDIANTES 3
#define MAX_DNI 10

typedef struct {
    char dni[MAX_DNI];
    int modelo;
    double nota;
} notaEstudiante;

int main() {
    FILE *f;  // Paso 1
    int i;
    notaEstudiante notas[NESTUDIANTES]={{"96545675Z",1,4.34},{"96345645D",1,7.2},{"94236532G",2,6.56}};

    f = fopen("notas3.txt", "w");  // Paso 2
    if (f == NULL) {  // Paso 3
        printf("Error abriendo el archivo\n");
        return 1;
    }

    for (i=0; i<NESTUDIANTES; i++)
        fprintf(f, "%s %d %.2lf\n", notas[i].dni, notas[i].modelo, notas[i].nota);  // Paso 4

    fclose(f);  // Paso 5

    return 0;
}