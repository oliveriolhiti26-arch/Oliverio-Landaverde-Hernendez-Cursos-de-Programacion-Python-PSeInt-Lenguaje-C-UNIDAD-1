/* Video 3 - Salida estandar (printf y especificadores de formato) */
#include <stdio.h>

int main()
{
    int n = 42;
    float precio = 25.6789;
    char letra = 'A';

    printf("Entero: %d\n", n);
    printf("Entero con ancho 5: [%5d]\n", n);
    printf("Entero alineado a la izquierda: [%-5d]\n", n);
    printf("Real: %f\n", precio);
    printf("Real con 2 decimales: %.2f\n", precio);
    printf("Real ancho 10 y 1 decimal: [%10.1f]\n", precio);
    printf("Caracter: %c  Codigo ASCII: %d\n", letra, letra);
    printf("Cadena: %s\n", "Hola mundo");
    printf("Simbolo de porcentaje: %%\n");

    return 0;
}
