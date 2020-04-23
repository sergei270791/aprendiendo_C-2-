#include <stdio.h>
int main() {
    int edad;
 
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    
    if (edad < 18)
        printf("Eres menor de edad\n");
    else if (edad%3==0)
        printf("Eres mayor de edad y tu edad es múltiplo de tres\n");
    else
        printf("Eres mayor de edad y tu edad no es múltiplo de tres\n");

    return 0;
}