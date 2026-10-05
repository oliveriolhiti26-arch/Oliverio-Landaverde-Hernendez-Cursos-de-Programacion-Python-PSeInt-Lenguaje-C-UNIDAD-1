/* Video 24 - Calculo del maximo y minimo de los valores guardados en un fichero
   (NUEVO) Lee las mediciones de mediciones.txt sin saber cuantas hay. */
#include <stdio.h>

int main()
{
    FILE *f;
    float x, max, min, suma = 0;
    int n = 0;

    f = fopen("mediciones.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir mediciones.txt\n");
        return 1;
    }

    while (fscanf(f, "%f", &x) == 1) {
        if (n == 0) {          /* el primer valor inicializa max y min */
            max = x;
            min = x;
        }
        else if (x > max)
            max = x;
        else if (x < min)
            min = x;
        suma += x;
        n++;
    }
    fclose(f);

    if (n == 0) {
        printf("El fichero esta vacio.\n");
        return 0;
    }
    printf("Valores: %d\nMaximo: %.2f\nMinimo: %.2f\nMedia: %.2f\n", n, max, min, suma / n);
    return 0;
}
