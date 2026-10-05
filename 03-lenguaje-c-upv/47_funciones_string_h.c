/* Video 47 - Funciones mas habituales de la libreria string.h
   (NUEVO) strlen, strcpy, strcat, strcmp, strchr, strstr */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[50] = "Hola";
    char b[50] = "mundo";
    char c[50];
    char *p;

    printf("strlen(\"%s\") = %d\n", a, (int)strlen(a));

    strcpy(c, a);
    printf("strcpy -> c = \"%s\"\n", c);

    strcat(c, " ");
    strcat(c, b);
    printf("strcat -> c = \"%s\"\n", c);

    printf("strcmp(\"%s\", \"%s\") = %d (negativo: a va antes)\n", a, b, strcmp(a, b));
    printf("strcmp(\"%s\", \"%s\") = %d (iguales)\n", a, "Hola", strcmp(a, "Hola"));

    p = strchr(c, 'm');
    if (p != NULL)
        printf("strchr: 'm' esta en la posicion %d\n", (int)(p - c));

    p = strstr(c, "und");
    if (p != NULL)
        printf("strstr: \"und\" empieza en la posicion %d\n", (int)(p - c));

    return 0;
}
