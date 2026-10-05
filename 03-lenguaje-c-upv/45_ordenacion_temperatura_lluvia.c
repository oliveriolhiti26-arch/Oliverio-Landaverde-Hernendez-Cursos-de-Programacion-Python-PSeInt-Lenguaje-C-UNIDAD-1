/* Video 45 - Ordenacion de vectores de temperatura y lluvia
   (NUEVO) Tres vectores paralelos (mes, temperatura, lluvia).
   Se ordenan los meses de mas a menos lluvioso manteniendo la relacion. */
#include <stdio.h>
#include <string.h>
#define N 12

int main()
{
    char mes[N][12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                       "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    float temp[N]   = {14.2, 15.8, 18.9, 21.5, 24.0, 25.3, 24.1, 24.0, 23.2, 21.0, 17.6, 14.9};
    float lluvia[N] = {8.1, 6.4, 9.0, 15.2, 48.7, 160.3, 182.5, 175.0, 140.8, 52.3, 12.0, 9.4};
    char auxMes[12];
    float aux;
    int i, j;

    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (lluvia[j] < lluvia[j + 1]) {     /* orden descendente */
                aux = lluvia[j]; lluvia[j] = lluvia[j + 1]; lluvia[j + 1] = aux;
                aux = temp[j];   temp[j] = temp[j + 1];     temp[j + 1] = aux;
                strcpy(auxMes, mes[j]);
                strcpy(mes[j], mes[j + 1]);
                strcpy(mes[j + 1], auxMes);
            }

    printf("%-11s %8s %10s\n", "Mes", "Temp(C)", "Lluvia(mm)");
    for (i = 0; i < N; i++)
        printf("%-11s %8.1f %10.1f\n", mes[i], temp[i], lluvia[i]);
    return 0;
}
