/* Video 7 - Procedimiento habitual de trabajo con ficheros
   1) Declarar FILE*  2) fopen  3) comprobar NULL  4) leer/escribir  5) fclose
   Lee numeros de numeros.txt hasta el final del fichero y los suma. */
#include <stdio.h>

int main()
{
    FILE *f;
    int n, suma = 0, cont = 0;

    f = fopen("numeros.txt", "r");
    if (f == NULL) {
        printf("Error al abrir numeros.txt\n");
        return 1;
    }

    while (fscanf(f, "%d", &n) == 1) {
        suma += n;
        cont++;
    }
    fclose(f);

    printf("Se leyeron %d numeros. Suma = %d\n", cont, suma);
    return 0;
}
