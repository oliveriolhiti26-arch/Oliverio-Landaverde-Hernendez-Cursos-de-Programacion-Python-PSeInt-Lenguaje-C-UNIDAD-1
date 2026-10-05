/* Video 40 - Busqueda secuencial en vectores
   (NUEVO) Devuelve la posicion del elemento o -1 si no esta. */
#include <stdio.h>

int buscar(int v[], int tam, int x)
{
    int i = 0;

    while (i < tam && v[i] != x)
        i++;
    if (i < tam)
        return i;
    return -1;
}

int main()
{
    int v[8] = {14, 3, 27, 8, 41, 19, 3, 6};
    int x, pos;

    printf("Valor a buscar: ");
    scanf("%d", &x);

    pos = buscar(v, 8, x);
    if (pos == -1)
        printf("%d no esta en el vector.\n", x);
    else
        printf("%d esta en la posicion %d.\n", x, pos);
    return 0;
}
