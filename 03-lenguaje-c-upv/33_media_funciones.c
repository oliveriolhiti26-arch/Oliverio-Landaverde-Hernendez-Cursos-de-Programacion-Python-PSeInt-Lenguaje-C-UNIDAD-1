/* Video 33 - Media de valores enteros mediante funciones
   (ejercicio original 27) */
#include <stdio.h>

/* Version 1: media de tres enteros */
float media(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

/* Version 2: media de un vector de tam elementos */
float mediaVector(int v[], int tam)
{
    int i;
    float m = 0;

    for (i = 0; i < tam; i++)
        m += v[i];
    return m / tam;
}

int main()
{
    int i1 = -4, i2 = 7, i3 = 1;
    int v[] = {-4, 7, 1, 10, 6};

    printf("Media (tres enteros): %.2f\n", media(i1, i2, i3));
    printf("Media (vector de 5): %.2f\n", mediaVector(v, 5));
    return 0;
}
