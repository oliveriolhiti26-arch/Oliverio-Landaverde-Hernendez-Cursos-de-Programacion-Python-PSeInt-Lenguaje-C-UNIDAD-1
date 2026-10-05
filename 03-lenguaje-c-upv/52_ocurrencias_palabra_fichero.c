/* Video 52 - Ocurrencias de una palabra en un fichero
   (NUEVO) Cuenta cuantas veces aparece una palabra en texto.txt
   sin distinguir mayusculas/minusculas e ignorando signos de puntuacion. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Pasa a minusculas y quita los signos que no sean letras o digitos */
void limpiar(char p[])
{
    int i, j = 0;

    for (i = 0; p[i] != '\0'; i++)
        if (isalnum((unsigned char)p[i]))
            p[j++] = tolower((unsigned char)p[i]);
    p[j] = '\0';
}

int main()
{
    FILE *f;
    char buscada[50], palabra[50];
    int veces = 0, total = 0;

    printf("Palabra a buscar: ");
    scanf("%49s", buscada);
    limpiar(buscada);

    f = fopen("texto.txt", "r");
    if (f == NULL) {
        printf("No se pudo abrir texto.txt\n");
        return 1;
    }
    while (fscanf(f, "%49s", palabra) == 1) {
        limpiar(palabra);
        total++;
        if (strcmp(palabra, buscada) == 0)
            veces++;
    }
    fclose(f);

    printf("\"%s\" aparece %d veces en un texto de %d palabras.\n", buscada, veces, total);
    return 0;
}
