/* Video 31 - Ficheros en lenguaje C: ejemplo de biblioteca genomica
   (NUEVO) genes.txt guarda "codigo longitud" de cada gen.
   Se copian a genes_largos.txt los que superan una longitud minima. */
#include <stdio.h>

int main()
{
    FILE *fe, *fs;
    int codigo, longitud, minimo, total = 0, largos = 0;
    int codMax = 0, lonMax = -1;

    printf("Longitud minima: ");
    scanf("%d", &minimo);

    fe = fopen("genes.txt", "r");
    fs = fopen("genes_largos.txt", "w");
    if (fe == NULL || fs == NULL) {
        printf("Error al abrir los ficheros.\n");
        return 1;
    }

    while (fscanf(fe, "%d %d", &codigo, &longitud) == 2) {
        total++;
        if (longitud > lonMax) {
            lonMax = longitud;
            codMax = codigo;
        }
        if (longitud >= minimo) {
            fprintf(fs, "%d %d\n", codigo, longitud);
            largos++;
        }
    }
    fclose(fe);
    fclose(fs);

    printf("Genes leidos: %d\n", total);
    printf("Genes con longitud >= %d: %d (en genes_largos.txt)\n", minimo, largos);
    if (total > 0)
        printf("Gen mas largo: %d (%d pares de bases)\n", codMax, lonMax);
    return 0;
}
