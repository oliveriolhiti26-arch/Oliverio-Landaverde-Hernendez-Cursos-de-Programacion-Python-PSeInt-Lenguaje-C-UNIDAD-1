/* Video 49 - Tratamiento de cadenas en ficheros
   (ejercicio original 38 CORREGIDO: era un documento de Word renombrado;
   se anade numeracion de lineas y el conteo de caracteres). */
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fichero;
    char cadena[200];
    int linea = 0, caracteres = 0;

    fichero = fopen("texto.txt", "r");
    if (fichero == NULL) {
        printf("No se pudo abrir el fichero.\n");
        return 1;
    }

    while (fgets(cadena, sizeof(cadena), fichero) != NULL) {
        cadena[strcspn(cadena, "\n")] = '\0';
        linea++;
        caracteres += strlen(cadena);
        printf("%2d: %s\n", linea, cadena);
    }
    fclose(fichero);

    printf("\nLineas: %d  Caracteres: %d\n", linea, caracteres);
    return 0;
}
