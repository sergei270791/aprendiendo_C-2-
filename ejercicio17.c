#include <stdio.h>

#define DIMI 9
#define DIMJ 10

int main() {
    int i, j;

    for (i=0; i<DIMI; i++){
        printf("La tabla del %d es: \n",i+1);
        for (j=0; j<DIMJ; j++){
            printf("%d por %d es %d\n", i+1, j+1,(i+1)*(j+1));
        }
    }
    return 0;
}