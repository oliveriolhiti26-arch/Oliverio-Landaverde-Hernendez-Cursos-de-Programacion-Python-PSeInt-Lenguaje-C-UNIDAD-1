/* Video 39 - Busqueda de maximo y minimo en un vector
   (ejercicios originales 29, 30 y 32 CORREGIDOS:
    - el 29 no tenia main,
    - el 30 tenia restos "[cite: 5]" y no compilaba,
    - el 32 usaba <cstdio>, que es de C++). */
#include <stdio.h>

/* Version con dos funciones (ejercicios 29 y 30) */
int Minimo(int v[], int tam)
{
    int i, min = v[0];

    for (i = 1; i < tam; i++)
        if (v[i] < min)
            min = v[i];
    return min;
}

int Maximo(int v[], int tam)
{
    int i, max = v[0];

    for (i = 1; i < tam; i++)
        if (v[i] > max)
            max = v[i];
    return max;
}

/* Version con una sola funcion que devuelve los dos valores por puntero (ejercicio 32) */
void MaxMin(int v[], int tam, int *max, int *min)
{
    int i;

    *max = v[0];
    *min = v[0];
    for (i = 1; i < tam; i++)
        if (v[i] > *max)
            *max = v[i];
        else if (v[i] < *min)
            *min = v[i];
}

int main()
{
    int valores[] = {12, 45, 2, 89, 4, 23};
    int tam = 6, maximo, minimo;

    printf("Con dos funciones -> max: %d  min: %d\n", Maximo(valores, tam), Minimo(valores, tam));

    MaxMin(valores, tam, &maximo, &minimo);
    printf("Con punteros      -> max: %d  min: %d\n", maximo, minimo);
    return 0;
}
