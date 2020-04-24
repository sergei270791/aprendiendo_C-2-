#include <stdio.h>
#include <string.h>
#define max 128
int main(){
    int i=0;
    char palabra[max];
    char minuscula,mayuscula;
    printf("Introduce una cadena de caracteres en minúsculas: ");
    gets(palabra);
    printf("Introduce un carácter en minúculas: ");
    scanf("\n%c",&minuscula);
    while(minuscula<'a' || minuscula>'z'){
        printf("Error, el carácter tiene que estar comprendido entre a y z. Vuelve a intentarlo: ");
        scanf("\n%c",&minuscula);
    }
    printf("Introduce un carácter en mayúsculas: ");
    scanf("\n%c",&mayuscula);
    while(mayuscula<'A' || mayuscula>'Z'){
        printf("Error, el carácter tiene que estar comprendido entre A y Z. Vuelve a intentarlo: ");
        scanf("\n%c",&mayuscula);
        
    }
    while(i<strlen(palabra)){
        if(palabra[i]==minuscula){
            palabra[i]=mayuscula;
        }
        i++;
    }
    printf("%s\n",palabra);
    printf("%s",strrev(palabra));
    

    return 0;

}