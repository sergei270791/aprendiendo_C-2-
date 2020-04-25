#include <stdio.h>
#define tam 20
int main(){
    int numero,cont=0,i,numeros[tam];
    printf("Introduce un entero positivo: ");
    scanf("%d",&numero);
    printf("El número convertido a binario es: ");
    for ( i = 0;i<100 ; i++)
    {   numeros[i]=numero%2;
        numero/=2;
        
        if(numero==1){
            
            break;
        }
        cont++;
    }
    printf("%d",numero);
    for ( i=cont; i >= 0; i--)
    {
        printf("%d",numeros[i]);
    }
    
    
    return 0;

}