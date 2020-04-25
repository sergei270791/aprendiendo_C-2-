#include <stdio.h>
#include <math.h>
#define DIM 10
int main() {
    int i, num1=0,num2=0,cont=0, sum=0;
    int numeros[DIM];

    for (i = 0; i < DIM; i++)
    {   
        printf("Introduce un número entero: ");
        scanf("%d", &numeros[i]);
        if(numeros[i]<0){
            num1++;
        }else if(numeros[i]>0){
            sum+=numeros[i];
            num2++;
        }else
        {
            break;
        }
        cont++;

    }
    printf("Se han leído un total de %d números, de los cuales %d eran negativos.\n",cont,num1);
    printf("La suma de los %d valores positivos leídos es: %d.",num2,sum);

    return 0;
}