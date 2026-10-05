/* Video 55 - Matrices de caracteres
   (NUEVO) Una matriz char[N][LONG] guarda N cadenas (una por fila).
   Se leen nombres, se ordenan alfabeticamente y se busca uno. */
#include <stdio.h>
#include <string.h>
#define N 5
#define LONG 20

int main()
{
    char nombres[N][LONG], aux[LONG], buscado[LONG];
    int i, j, encontrado = -1;

    for (i = 0; i < N; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%19s", nombres[i]);
    }

    for (i = 0; i < N - 1; i++)
        for (j = 0; j < N - 1 - i; j++)
            if (strcmp(nombres[j], nombres[j + 1]) > 0) {
                strcpy(aux, nombres[j]);
                strcpy(nombres[j], nombres[j + 1]);
                strcpy(nombres[j + 1], aux);
            }

    printf("\nOrden alfabetico:\n");
    for (i = 0; i < N; i++)
        printf("  %s (inicial %c, %d letras)\n", nombres[i], nombres[i][0], (int)strlen(nombres[i]));

    printf("Nombre a buscar: ");
    scanf("%19s", buscado);
    for (i = 0; i < N && encontrado == -1; i++)
        if (strcmp(nombres[i], buscado) == 0)
            encontrado = i;

    if (encontrado == -1)
        printf("No esta en la lista.\n");
    else
        printf("Esta en la fila %d.\n", encontrado);
    return 0;
}
