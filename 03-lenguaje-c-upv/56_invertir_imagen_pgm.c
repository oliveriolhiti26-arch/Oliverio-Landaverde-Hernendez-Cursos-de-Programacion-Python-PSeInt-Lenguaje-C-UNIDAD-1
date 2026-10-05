/* Video 56 - Invertir una imagen PGM
   (NUEVO) Formato PGM de texto (P2): "P2", ancho alto, valor maximo y los
   pixeles. Cada pixel se sustituye por (maximo - pixel) -> negativo.
   Lee imagen.pgm y escribe invertida.pgm (se puede abrir con GIMP). */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fe, *fs;
    char tipo[3];
    int ancho, alto, maximo, i, j;
    int **img;

    fe = fopen("imagen.pgm", "r");
    if (fe == NULL) {
        printf("No se pudo abrir imagen.pgm\n");
        return 1;
    }
    if (fscanf(fe, "%2s %d %d %d", tipo, &ancho, &alto, &maximo) != 4 || strcmp(tipo, "P2") != 0) {
        printf("El fichero no es un PGM P2 valido.\n");
        fclose(fe);
        return 1;
    }

    /* matriz dinamica alto x ancho */
    img = (int **) malloc(alto * sizeof(int *));
    for (i = 0; i < alto; i++)
        img[i] = (int *) malloc(ancho * sizeof(int));

    for (i = 0; i < alto; i++)
        for (j = 0; j < ancho; j++)
            fscanf(fe, "%d", &img[i][j]);
    fclose(fe);

    for (i = 0; i < alto; i++)
        for (j = 0; j < ancho; j++)
            img[i][j] = maximo - img[i][j];

    fs = fopen("invertida.pgm", "w");
    if (fs == NULL) {
        printf("No se pudo crear invertida.pgm\n");
        return 1;
    }
    fprintf(fs, "P2\n%d %d\n%d\n", ancho, alto, maximo);
    for (i = 0; i < alto; i++) {
        for (j = 0; j < ancho; j++)
            fprintf(fs, "%d ", img[i][j]);
        fprintf(fs, "\n");
    }
    fclose(fs);

    for (i = 0; i < alto; i++)
        free(img[i]);
    free(img);

    printf("Imagen de %dx%d invertida en invertida.pgm\n", ancho, alto);
    return 0;
}
