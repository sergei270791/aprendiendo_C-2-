#include <stdio.h>
#define DIM 10
int main() {
    int i,numero;
    printf("Introduce un número entre 1 y 9: ");
    scanf("%d",&numero);
    printf("La tabla del %d es:\n",numero);
    for (i=0; i<DIM; i++) {
        printf("%d por %d es %d\n",numero,i+1,numero*(i+1));
    }

    return 0;
}