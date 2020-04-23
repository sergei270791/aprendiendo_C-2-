#include <stdio.h>

int main() {
    int altura;
    double peso, indice;
 
    printf("Introduce tu peso (kg): ");
    scanf("%lf", &peso);
    printf("Introduce tu altura (cm): ");
    scanf("%d", &altura);

    indice = 10000 * peso / (altura * altura);
    printf("Tu índice de masa corporal es %.2lf\n", indice);

    if (indice < 18.5) {
        printf("Tienes bajo peso.\n");
        if (indice < 16.0)
            printf("De hecho, tienes delgadez severa.");
        else if (indice < 17.0)
            printf("De hecho, tienes delgadez moderada.");
        else
            printf("De hecho, tienes delgadez aceptable.");
    }
    else if (indice < 25)
        printf("Tienes peso normal.\n");
    else if (indice < 30)
        printf("Tienes sobrepeso.\n");
    else {
        printf("Tienes obesidad.\n");
        if (indice < 35.0)
            printf("De hecho, tienes obesidad tipo I.");
        else if (indice < 40)
            printf("De hecho, tienes obesidad tipo II.");
        else
            printf("De hecho, tienes obesidad tipo III.");
    }

    return 0;
}