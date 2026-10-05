/* Video 29 - Vectores y ficheros: servicio e-Licopter
   (NUEVO) vuelos.txt guarda la duracion en minutos de cada vuelo del dia.
   Se cargan en un vector, se calcula la facturacion (tarifa por minuto)
   y se escriben en informe_vuelos.txt los vuelos que superan la media. */
#include <stdio.h>
#define MAX 100
#define TARIFA 12.5   /* pesos por minuto */

int main()
{
    FILE *f;
    int minutos[MAX], n = 0, i, total = 0;
    float media;

    f = fopen("vuelos.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir vuelos.txt\n");
        return 1;
    }
    while (n < MAX && fscanf(f, "%d", &minutos[n]) == 1)
        n++;
    fclose(f);

    if (n == 0) {
        printf("No hay vuelos.\n");
        return 0;
    }

    for (i = 0; i < n; i++)
        total += minutos[i];
    media = (float)total / n;

    printf("Vuelos: %d  Minutos totales: %d  Media: %.1f min\n", n, total, media);
    printf("Facturacion del dia: %.2f pesos\n", total * TARIFA);

    f = fopen("informe_vuelos.txt", "w");
    if (f == NULL) {
        printf("No se pudo crear el informe.\n");
        return 1;
    }
    fprintf(f, "Vuelos por encima de la media (%.1f min):\n", media);
    for (i = 0; i < n; i++)
        if (minutos[i] > media)
            fprintf(f, "Vuelo %d: %d min -> %.2f pesos\n", i + 1, minutos[i], minutos[i] * TARIFA);
    fclose(f);
    printf("Informe escrito en informe_vuelos.txt\n");

    return 0;
}
