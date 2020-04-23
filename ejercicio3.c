#include <stdio.h>
#include <string.h>
#define max 20
int main() {
    char mes[max];
 
    printf("Introduce el nombre de un mes: ");
    gets(mes);
    
    if (strcmp(mes,"febrero")==0){
        printf("%s tiene 28/29 días\n",mes);}
    else if (strcmp(mes,"abril")==0||strcmp(mes,"junio")==0||strcmp(mes,"septiembre")==0||strcmp(mes,"noviembre")==0){
        printf("%s tiene 30 días\n",mes);}
    else{
        printf("%s tiene 31 días\n",mes);}

    return 0;
}