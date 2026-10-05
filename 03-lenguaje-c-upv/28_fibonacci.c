/* Video 28 - Programas para el calculo de la serie de Fibonacci
   (NUEVO) 1) Muestra los N primeros terminos.
           2) Indica si un numero pertenece a la serie. */
#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b = 1, sig, x;

    printf("Cuantos terminos quieres (max 90)? ");
    scanf("%d", &n);
    if (n < 1 || n > 90) {
        printf("Valor fuera de rango.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("%lld ", a);
        sig = a + b;
        a = b;
        b = sig;
    }
    printf("\n");

    printf("Dame un numero para saber si es de Fibonacci: ");
    scanf("%lld", &x);
    a = 0;
    b = 1;
    while (a < x) {
        sig = a + b;
        a = b;
        b = sig;
    }
    if (a == x)
        printf("%lld SI pertenece a la serie.\n", x);
    else
        printf("%lld NO pertenece a la serie.\n", x);

    return 0;
}
