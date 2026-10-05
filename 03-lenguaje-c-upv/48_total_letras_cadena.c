/* Video 48 - Calculo del total de letras de una cadena
   (ejercicio original 37 CORREGIDO: el archivo era un documento de Word
   renombrado a .C; se pasa a codigo fuente real). */
#include <stdio.h>
#include <ctype.h>

int totalLetras(char cadena[])
{
    int i = 0, total = 0;

    while (cadena[i] != '\0') {
        if (isalpha((unsigned char)cadena[i]))
            total++;
        i++;
    }
    return total;
}

int main()
{
    char cadena[100];

    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("El total de letras de la cadena es: %d\n", totalLetras(cadena));
    return 0;
}
