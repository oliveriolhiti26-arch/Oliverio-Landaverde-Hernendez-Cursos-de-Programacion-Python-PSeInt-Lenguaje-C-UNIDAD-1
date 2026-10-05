/* Video 51 - Sustituir caracteres de una cadena por otros caracteres
   (NUEVO) Devuelve cuantas sustituciones se hicieron. */
#include <stdio.h>
#include <string.h>

int sustituir(char cad[], char viejo, char nuevo)
{
    int i, cambios = 0;

    for (i = 0; cad[i] != '\0'; i++)
        if (cad[i] == viejo) {
            cad[i] = nuevo;
            cambios++;
        }
    return cambios;
}

int main()
{
    char texto[100], viejo, nuevo;
    int n;

    printf("Cadena: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Caracter a sustituir: ");
    scanf(" %c", &viejo);
    printf("Nuevo caracter: ");
    scanf(" %c", &nuevo);

    n = sustituir(texto, viejo, nuevo);
    printf("Resultado: %s\n(%d sustituciones)\n", texto, n);
    return 0;
}
