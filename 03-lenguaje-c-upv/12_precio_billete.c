/* Video 12 - Calculo precio billete
   (ejercicio original 5 CORREGIDO: scanf usaba "&f" y "&d" en lugar de "%f" y "%d") */
#include <stdio.h>

int main()
{
    float precio, IVA = 0.21;
    int nacional;

    printf("Precio del billete: ");
    scanf("%f", &precio);
    printf("Cliente nacional (1) o no nacional (0): ");
    scanf("%d", &nacional);

    if (nacional == 1)
        precio *= (1 + IVA);

    printf("\nEl precio final es %.2f euros.\n", precio);
    return 0;
}
