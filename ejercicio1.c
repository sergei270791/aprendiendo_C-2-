#include <stdio.h>

int main() {
    int edad;
    printf("¿cual es tu edad?: ");
    scanf("%d",&edad);
    printf("%d", edad>=18 || edad%3!=0 );
    return 0;
}