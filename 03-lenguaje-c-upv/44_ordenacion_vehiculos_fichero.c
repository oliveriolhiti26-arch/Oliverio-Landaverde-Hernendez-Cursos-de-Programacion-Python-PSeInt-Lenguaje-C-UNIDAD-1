/* Video 44 - Ordenacion de datos de vehiculos en ficheros
   (NUEVO) vehiculos.txt contiene "matricula kilometros".
   Se ordenan por kilometros (burbuja) y se guardan en vehiculos_ordenados.txt */
#include <stdio.h>
#include <string.h>
#define MAX 50

int main()
{
    FILE *f;
    char mat[MAX][10], auxMat[10];
    int km[MAX], n = 0, i, j, auxKm;

    f = fopen("vehiculos.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir vehiculos.txt\n");
        return 1;
    }
    while (n < MAX && fscanf(f, "%9s %d", mat[n], &km[n]) == 2)
        n++;
    fclose(f);

    /* burbuja: al intercambiar km se intercambia tambien la matricula */
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (km[j] > km[j + 1]) {
                auxKm = km[j];
                km[j] = km[j + 1];
                km[j + 1] = auxKm;
                strcpy(auxMat, mat[j]);
                strcpy(mat[j], mat[j + 1]);
                strcpy(mat[j + 1], auxMat);
            }

    f = fopen("vehiculos_ordenados.txt", "w");
    if (f == NULL) {
        printf("No se pudo crear vehiculos_ordenados.txt\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        fprintf(f, "%s %d\n", mat[i], km[i]);
        printf("%-9s %7d km\n", mat[i], km[i]);
    }
    fclose(f);
    printf("Guardado en vehiculos_ordenados.txt\n");
    return 0;
}
