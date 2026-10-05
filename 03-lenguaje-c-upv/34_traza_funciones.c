/* Video 34 - Traza de llamadas a funciones
   (ejercicio original 28, con mensajes que muestran el orden de las llamadas) */
#include <stdio.h>

/* Devuelve el minimo del vector */
int f1(int v[], int t)
{
    int i, x;

    printf("  -> entra en f1\n");
    x = v[0];
    for (i = 1; i < t; i++)
        if (v[i] < x)
            x = v[i];
    printf("  <- sale de f1 devolviendo %d\n", x);
    return x;
}

/* Busca x en el vector: devuelve 1 si esta y 0 si no */
int f2(int v[], int t, int x)
{
    int i;

    printf("  -> entra en f2 buscando %d\n", x);
    for (i = 0; i < t; i++)
        if (v[i] == x) {
            printf("  <- sale de f2 devolviendo 1\n");
            return 1;
        }
    printf("  <- sale de f2 devolviendo 0\n");
    return 0;
}

int main()
{
    int vec[5] = {6, -4, -2, 7, 2};

    printf("main llama a f1\n");
    printf("f1: %d\n", f1(vec, 5));

    printf("main llama a f2\n");
    if (f2(vec, 5, 7) == 1)
        printf("Si.\n");
    else
        printf("No.\n");

    printf("main llama a f2 con el resultado de f1\n");
    printf("Resultado: %d\n", f2(vec, 5, f1(vec, 5)));
    return 0;
}
