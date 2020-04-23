#include <stdio.h>

int main() {
    int x=3;
  
    printf("Recuerda: la operación devuelve 1 si se cumple (true) y 0 si no se cumple (false)\n");
  
    printf("El resultado de evaluar x>2 && x<=5 es: %d\n", x>2 && x<=5);

    printf("El resultado de evaluar x!=2 && x>4 es: %d\n", x!=2 && x>4);
   
    printf("El resultado de evaluar x>=2 || x>5 es: %d\n", x>=2 || x>5);   
   
    printf("El resultado de evaluar x>3 || x==2 es: %d\n", x>3 || x==2);
  
    return 0;
}