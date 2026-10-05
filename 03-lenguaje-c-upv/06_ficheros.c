/* Video 6 - Ficheros en lenguaje C
   (ejercicio original 6, ampliado) Escribe un fichero y despues lo vuelve a leer. */
#include <stdio.h>

int main()
{
    FILE *archivo;
    char linea[100];

    archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    fprintf(archivo, "Hola, este es un archivo de prueba.\n");
    fprintf(archivo, "Segunda linea: %d\n", 2025);
    fclose(archivo);

    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    printf("Contenido de datos.txt:\n");
    while (fgets(linea, sizeof(linea), archivo) != NULL)
        printf("%s", linea);
    fclose(archivo);

    return 0;
}
