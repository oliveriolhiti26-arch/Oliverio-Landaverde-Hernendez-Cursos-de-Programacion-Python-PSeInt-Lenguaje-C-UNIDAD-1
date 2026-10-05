/* Video 32 - Evaluacion de numeros primos
   (ejercicio original 26) Numeros primos menores que 500. */
#include <stdio.h>

/* Devuelve 1 si n es primo y 0 si no lo es */
int esPrimo(int n)
{
    int i;

    if (n <= 1)
        return 0;
    for (i = 2; i * i <= n; i++)   /* basta con llegar a la raiz de n */
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int i;

    printf("Numeros primos menores de 500:\n");
    for (i = 2; i < 500; i++)
        if (esPrimo(i))
            printf("%d ", i);
    printf("\n");

    return 0;
}
