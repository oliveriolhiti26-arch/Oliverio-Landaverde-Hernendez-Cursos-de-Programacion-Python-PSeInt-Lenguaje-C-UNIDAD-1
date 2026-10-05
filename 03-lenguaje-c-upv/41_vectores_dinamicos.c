/* Video 41 - Vectores dinamicos en lenguaje C
   (NUEVO) El tamano del vector se decide en tiempo de ejecucion con malloc. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    float *v, suma = 0;

    printf("Cuantos valores quieres guardar? ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Cantidad no valida.\n");
        return 1;
    }

    v = (float *) malloc(n * sizeof(float));
    if (v == NULL) {
        printf("No hay memoria suficiente.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &v[i]);
        suma += v[i];
    }

    printf("Valores introducidos:");
    for (i = 0; i < n; i++)
        printf(" %.2f", v[i]);
    printf("\nMedia: %.2f\n", suma / n);

    free(v);   /* siempre liberar la memoria reservada */
    return 0;
}
