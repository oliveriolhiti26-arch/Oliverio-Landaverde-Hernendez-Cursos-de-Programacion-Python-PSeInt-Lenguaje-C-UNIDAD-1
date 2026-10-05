/* Video 23 - Calculo de cantidades a partir de datos guardados en un fichero
   (NUEVO) ventas.txt contiene lineas "unidades precio_unitario".
   Se calcula el total de unidades, el importe total y el precio medio. */
#include <stdio.h>

int main()
{
    FILE *f;
    int unidades, totalUnidades = 0, lineas = 0;
    float precio, importe = 0;

    f = fopen("ventas.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir ventas.txt\n");
        return 1;
    }

    while (fscanf(f, "%d %f", &unidades, &precio) == 2) {
        totalUnidades += unidades;
        importe += unidades * precio;
        lineas++;
    }
    fclose(f);

    printf("Ventas leidas: %d\n", lineas);
    printf("Unidades vendidas: %d\n", totalUnidades);
    printf("Importe total: %.2f\n", importe);
    if (totalUnidades > 0)
        printf("Precio medio por unidad: %.2f\n", importe / totalUnidades);

    return 0;
}
