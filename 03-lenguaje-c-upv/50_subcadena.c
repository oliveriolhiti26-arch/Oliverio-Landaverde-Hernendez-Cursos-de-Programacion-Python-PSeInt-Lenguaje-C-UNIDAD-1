/* Video 50 - Obtencion de una subcadena a partir de una cadena
   (NUEVO) Copia 'longitud' caracteres desde la posicion 'inicio'. */
#include <stdio.h>
#include <string.h>

void subcadena(char origen[], int inicio, int longitud, char destino[])
{
    int i = 0, tam = strlen(origen);

    while (i < longitud && inicio + i < tam) {
        destino[i] = origen[inicio + i];
        i++;
    }
    destino[i] = '\0';
}

int main()
{
    char texto[100], parte[100];
    int inicio, longitud;

    printf("Cadena: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Posicion inicial (desde 0): ");
    scanf("%d", &inicio);
    printf("Longitud: ");
    scanf("%d", &longitud);

    if (inicio < 0 || inicio >= (int)strlen(texto) || longitud < 0) {
        printf("Datos fuera de rango.\n");
        return 1;
    }

    subcadena(texto, inicio, longitud, parte);
    printf("Subcadena: [%s]\n", parte);
    return 0;
}
