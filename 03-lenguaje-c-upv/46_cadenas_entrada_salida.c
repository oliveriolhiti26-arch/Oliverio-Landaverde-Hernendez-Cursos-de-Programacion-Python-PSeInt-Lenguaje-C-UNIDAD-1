/* Video 46 - Tratamiento de cadenas en entrada y salida estandar
   (NUEVO) Diferencia entre scanf("%s") (lee una palabra) y fgets (lee la linea). */
#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[30], frase[100];
    int c;

    printf("Escribe una palabra: ");
    scanf("%29s", palabra);
    while ((c = getchar()) != '\n' && c != EOF)   /* limpiar el resto de la linea */
        ;

    printf("Escribe una frase completa: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';           /* quitar el salto de linea */

    printf("\nPalabra: [%s]\n", palabra);
    printf("Frase:   [%s]\n", frase);
    printf("Primera letra de la frase: %c\n", frase[0]);
    printf("Frase con puts: ");
    puts(frase);
    return 0;
}
