#include <stdio.h>
#include <math.h>
#define DIM 10
int main() {
    int i, num1=0,num2=0,cont=0, sum=0;
    int numeros[DIM];

    for (i = 0; i < DIM; i++)
    {   
        printf("Introduce un número entero(0 para terminar): ");
        scanf("%d", &numeros[i]);
       
        if(numeros[i]==0)
        {
            break;
        }
        if(cont==DIM-1){
            printf("Máximo de números alcanzado. Continuando...\n");
        }
        cont++;
    }
    if(cont==0){
        printf("No se ha introducido ningún número.");
    }else{
        printf("Los números tecleados son: ");
        for (i=cont-1; i>=0; i--)
        {
            printf("%d ",numeros[i]);
        }

    }

    return 0;
}