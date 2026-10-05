/* Video 43 - Ordenacion mediante el metodo de la burbuja
   (NUEVO) */
#include <stdio.h>

void burbuja(int v[], int n)
{
    int i, j, aux, cambios;

    for (i = 0; i < n - 1; i++) {
        cambios = 0;
        for (j = 0; j < n - 1 - i; j++)
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
                cambios = 1;
            }
        if (!cambios)       /* si no hubo cambios ya esta ordenado */
            break;
    }
}

void mostrar(int v[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

int main()
{
    int v[10] = {29, 4, 17, 8, 42, 1, 15, 23, 10, 6};

    printf("Antes:   ");
    mostrar(v, 10);
    burbuja(v, 10);
    printf("Despues: ");
    mostrar(v, 10);
    return 0;
}
