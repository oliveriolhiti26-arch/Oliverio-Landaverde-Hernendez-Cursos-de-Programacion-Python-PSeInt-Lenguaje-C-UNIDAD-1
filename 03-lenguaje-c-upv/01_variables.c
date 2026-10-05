/* Video 1 - Variables en lenguaje C
   Declara variables de los tipos basicos y muestra su valor y tamano. */
#include <stdio.h>

int main()
{
    int edad = 20;
    float altura = 1.75;
    double pi = 3.14159265358979;
    char inicial = 'C';

    printf("int    edad    = %d  (%d bytes)\n", edad, (int)sizeof(edad));
    printf("float  altura  = %.2f (%d bytes)\n", altura, (int)sizeof(altura));
    printf("double pi      = %.10f (%d bytes)\n", pi, (int)sizeof(pi));
    printf("char   inicial = %c  (%d bytes)\n", inicial, (int)sizeof(inicial));

    return 0;
}
