#include <stdio.h>

int main() {
    FILE *f;  
    char identificador[10];
    int cont1=0,cont2=0,modelo,aciertos,fallos,blanco, i;
    double nota, media1,media2;

    f = fopen("notas2.txt", "r"); 
    if (f == NULL) {  
        printf("Error abriendo el archivo\n");
        return 1;
    }
    for (i=0, media1=0.0,media2=0.0; fscanf(f, "%s %d %d %d %d %lf", identificador, &modelo,&aciertos,&fallos,&blanco, &nota) == 6 ; i++){
        if(modelo==1){
            media1+=nota;
            cont1++;
        }else{
            media2+=nota;
            cont2++;
        }
    }
    printf("La nota media del modelo 1 es: %.3lf\n", media1/cont1);
    printf("La nota media del modelo 2 es: %.3lf\n", media2/cont2);
    fclose(f);  

    return 0;
}