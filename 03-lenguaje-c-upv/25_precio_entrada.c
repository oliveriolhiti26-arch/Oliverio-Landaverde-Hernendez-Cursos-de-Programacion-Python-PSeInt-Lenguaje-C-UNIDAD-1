/* Video 25 - Calculo de precio de entrada
   (ejercicio original 21) Menores de 18 y mayores de 65 pagan 25;
   el resto paga 35, o 42.5 en temporada alta (junio a septiembre). */
#include <stdio.h>

int main()
{
    float precio = 35;   /* precio estandar */
    int edad, mes;

    printf("Edad del visitante: ");
    scanf("%d", &edad);

    if (edad < 18 || edad >= 65)
        precio = 25;
    else {
        printf("Mes de la visita (1-12): ");
        scanf("%d", &mes);
        if (mes > 5 && mes < 10)
            precio = 42.5;
    }
    printf("\nPrecio de la entrada: %.2f pesos.\n", precio);
    return 0;
}
