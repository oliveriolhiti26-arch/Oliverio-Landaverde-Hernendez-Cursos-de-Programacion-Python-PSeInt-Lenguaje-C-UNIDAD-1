/* Video 30 - Ficheros en lenguaje C: ejemplo de fabrica de nanobots
   (NUEVO) produccion.txt tiene las unidades fabricadas cada dia.
   Se detectan los dias por debajo del objetivo y el mejor dia. */
#include <stdio.h>
#define MAX 31

int main()
{
    FILE *f;
    int prod[MAX], n = 0, i, objetivo, mejor = 0, total = 0;

    f = fopen("produccion.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir produccion.txt\n");
        return 1;
    }
    while (n < MAX && fscanf(f, "%d", &prod[n]) == 1)
        n++;
    fclose(f);

    if (n == 0) {
        printf("No hay datos de produccion.\n");
        return 0;
    }

    printf("Objetivo diario de nanobots: ");
    scanf("%d", &objetivo);

    f = fopen("alertas_produccion.txt", "w");
    if (f == NULL) {
        printf("No se pudo crear alertas_produccion.txt\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        total += prod[i];
        if (prod[i] > prod[mejor])
            mejor = i;
        if (prod[i] < objetivo)
            fprintf(f, "Dia %d: %d unidades (faltan %d)\n", i + 1, prod[i], objetivo - prod[i]);
    }
    fclose(f);

    printf("Dias registrados: %d  Produccion total: %d\n", n, total);
    printf("Mejor dia: %d con %d unidades\n", mejor + 1, prod[mejor]);
    printf("Dias bajo objetivo guardados en alertas_produccion.txt\n");
    return 0;
}
