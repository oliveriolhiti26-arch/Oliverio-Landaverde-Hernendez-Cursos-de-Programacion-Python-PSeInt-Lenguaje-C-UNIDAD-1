/* Video 15 - Sentencia switch
   (ejercicios originales 7 y 12, que eran iguales. Se anade el menu
   para que el usuario sepa que opciones existen). */
#include <stdio.h>

int main()
{
    int valor, opc;

    printf("Dame un valor entero: ");
    scanf("%d", &valor);

    printf("Opciones de calculo sobre el valor:\n");
    printf("  1. Mitad\n");
    printf("  2. Doble\n");
    printf("  3. Triple\n");
    printf("Elige opcion: ");
    scanf("%d", &opc);

    switch (opc) {
        case 1:
            printf("Resultado: %.1f\n", valor / 2.0);
            break;
        case 2:
            printf("Resultado: %d\n", valor * 2);
            break;
        case 3:
            printf("Resultado: %d\n", valor * 3);
            break;
        default:
            printf("Opcion incorrecta\n");
    }
    return 0;
}
