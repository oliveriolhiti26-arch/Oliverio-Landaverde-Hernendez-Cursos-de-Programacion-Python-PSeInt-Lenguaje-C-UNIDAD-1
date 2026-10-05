/* Video 21 - Implementacion de bucles con do ... while
   (ejercicio original 19 CORREGIDO: estaba escrito en C++ con cout/cin,
   se pasa a C con printf/scanf). */
#include <stdio.h>

int main()
{
    int opcion;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Saludar\n");
        printf("2. Mostrar mensaje\n");
        printf("3. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Hola, bienvenido.\n");
                break;
            case 2:
                printf("Estas utilizando un ciclo do-while.\n");
                break;
            case 3:
                printf("Programa terminado.\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opcion != 3);

    return 0;
}
