/* Video 37 - Totales y media de los elementos de un vector numerico
   (NUEVO) */
#include <stdio.h>
#define N 10

int main()
{
    float v[N];
    float suma = 0, media;
    int i, positivos = 0, sobreMedia = 0;

    printf("Introduce %d numeros:\n", N);
    for (i = 0; i < N; i++) {
        printf("v[%d] = ", i);
        scanf("%f", &v[i]);
        suma += v[i];
        if (v[i] > 0)
            positivos++;
    }
    media = suma / N;

    for (i = 0; i < N; i++)
        if (v[i] > media)
            sobreMedia++;

    printf("Total: %.2f\n", suma);
    printf("Media: %.2f\n", media);
    printf("Valores positivos: %d\n", positivos);
    printf("Valores por encima de la media: %d\n", sobreMedia);
    return 0;
}
