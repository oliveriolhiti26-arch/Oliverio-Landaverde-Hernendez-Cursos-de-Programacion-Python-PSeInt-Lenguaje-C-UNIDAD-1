/* Video 26 - Implementacion de bucles con for
   (ejercicio original 22) Multiplos de 3 y de 7 menores que 200. */
#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i < 200; i++)
        if (i % 3 == 0 && i % 7 == 0)
            printf("%d\n", i);

    return 0;
}
