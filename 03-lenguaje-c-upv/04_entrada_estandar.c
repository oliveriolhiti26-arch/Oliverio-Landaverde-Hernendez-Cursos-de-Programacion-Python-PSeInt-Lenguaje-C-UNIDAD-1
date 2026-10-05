/* Video 4 - Entrada estandar (scanf) */
#include <stdio.h>

int main()
{
    int edad;
    float peso;
    char inicial;

    printf("Edad: ");
    scanf("%d", &edad);
    printf("Peso (kg): ");
    scanf("%f", &peso);
    printf("Inicial de tu nombre: ");
    scanf(" %c", &inicial);   /* el espacio salta el salto de linea pendiente */

    printf("\nTienes %d anios, pesas %.1f kg y tu inicial es %c.\n", edad, peso, inicial);
    return 0;
}
