#include <stdio.h>

int main() {
    int opcion;

    printf("Menú:\n  1. Empezar partida\n  2. Ajustes\n  3. Ayuda\n  4. Salir\n");
    printf("Selecciona una opción: "); 
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:          
            printf("Has elegido comenzar la partida.\n");
            break;
        case 2:          
            printf("Aquí estará el código para mostrar los ajustes del juego.\n");
            break;
        case 3:          
            printf("Aquí estará el código para mostrar la ayuda.\n");
            break;
        case 4:          
            printf("¡Hasta luego!\n");
            break;
        default:
            printf("Opción incorrecta.\n");
    }

    return 0;
}