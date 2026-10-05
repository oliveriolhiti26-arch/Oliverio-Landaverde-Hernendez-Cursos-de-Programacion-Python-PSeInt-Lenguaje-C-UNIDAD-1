/* Video 13 - Maximo comun divisor y minimo comun multiplo
   (NUEVO) Algoritmo de Euclides: mcd(a,b) = mcd(b, a % b). mcm = a*b/mcd. */
#include <stdio.h>

int main()
{
    int a, b, x, y, r, mcd, mcm;

    printf("Dame dos enteros positivos: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Los numeros deben ser positivos.\n");
        return 1;
    }

    x = a;
    y = b;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    mcd = x;
    mcm = a / mcd * b;   /* se divide primero para evitar desbordamiento */

    printf("MCD(%d, %d) = %d\n", a, b, mcd);
    printf("MCM(%d, %d) = %d\n", a, b, mcm);
    return 0;
}
