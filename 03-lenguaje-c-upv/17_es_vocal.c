/* Video 17 - Comprobar si el caracter es una vocal
   (ejercicios originales 9, 14 y 15. Se deja la version con switch,
   sin la cabecera del compilador en linea). */
#include <stdio.h>

int main()
{
    char c;

    printf("Caracter: ");
    scanf(" %c", &c);

    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Es una vocal minuscula.\n");
            break;
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Es una vocal mayuscula.\n");
            break;
        default:
            printf("No es una vocal.\n");
    }
    return 0;
}
