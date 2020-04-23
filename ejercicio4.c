#include <stdio.h>
typedef struct 
{
    int dia,mes,anyo;
}fecha;

int main() {
    fecha primera;
    fecha segunda;
    printf("Por favor, introduce la primera fecha: ");
    scanf("%d %d %d",&primera.dia,&primera.mes,&primera.anyo);
    printf("Por favor, introduce la segunda fecha: ");
    scanf("%d %d %d",&segunda.dia,&segunda.mes,&segunda.anyo);
    if(primera.anyo<segunda.anyo){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",primera.dia,primera.mes,primera.anyo,segunda.dia,segunda.mes,segunda.anyo);
    }else if(primera.anyo>segunda.anyo){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",segunda.dia,segunda.mes,segunda.anyo,primera.dia,primera.mes,primera.anyo);
    }else if(primera.mes<segunda.mes){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",primera.dia,primera.mes,primera.anyo,segunda.dia,segunda.mes,segunda.anyo);
    }else if(primera.mes>segunda.mes){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",segunda.dia,segunda.mes,segunda.anyo,primera.dia,primera.mes,primera.anyo);
    }else if(primera.dia<segunda.dia){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",primera.dia,primera.mes,primera.anyo,segunda.dia,segunda.mes,segunda.anyo);
    }else if(primera.dia>segunda.dia){
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d",segunda.dia,segunda.mes,segunda.anyo,primera.dia,primera.mes,primera.anyo);
    }else{
        printf("Las dos fechas son iguales");
    }
    
    return 0;
}