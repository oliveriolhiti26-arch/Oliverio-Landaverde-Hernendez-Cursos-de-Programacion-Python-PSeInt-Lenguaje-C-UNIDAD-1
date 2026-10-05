/* Video 27 - Cuadrados y cubos de numeros naturales
   (ejercicio original 25) Tabla del 1 al 10 guardada en un fichero. */
#include <stdio.h>

int main()
{
    int i;
    FILE *f;

    f = fopen("cuadrados_cubos.txt", "w");
    if (f == NULL) {
        printf("Error al abrir el fichero\n");
        return 1;
    }

    fprintf(f, "Numero\tCuadrado\tCubo\n");
    fprintf(f, "-----------------------------\n");
    for (i = 1; i <= 10; i++)
        fprintf(f, "%d\t%d\t\t%d\n", i, i * i, i * i * i);

    fclose(f);
    printf("Datos guardados correctamente en cuadrados_cubos.txt\n");
    return 0;
}
