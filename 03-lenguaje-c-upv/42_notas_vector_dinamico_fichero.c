/* Video 42 - Cargar notas en un vector dinamico a partir de un fichero
   con una cantidad indeterminada de valores
   (NUEVO) El vector crece con realloc a medida que se leen notas. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    float *notas = NULL, *tmp, x, suma = 0;
    int n = 0, capacidad = 0, i, aprobados = 0;

    f = fopen("notas.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir notas.txt\n");
        return 1;
    }

    while (fscanf(f, "%f", &x) == 1) {
        if (n == capacidad) {               /* vector lleno: se duplica */
            capacidad = (capacidad == 0) ? 4 : capacidad * 2;
            tmp = (float *) realloc(notas, capacidad * sizeof(float));
            if (tmp == NULL) {
                printf("Sin memoria.\n");
                free(notas);
                fclose(f);
                return 1;
            }
            notas = tmp;
        }
        notas[n] = x;
        n++;
    }
    fclose(f);

    if (n == 0) {
        printf("No hay notas en el fichero.\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        suma += notas[i];
        if (notas[i] >= 5)
            aprobados++;
    }
    printf("Notas leidas: %d\n", n);
    printf("Media: %.2f\n", suma / n);
    printf("Aprobados: %d  Suspensos: %d\n", aprobados, n - aprobados);

    free(notas);
    return 0;
}
