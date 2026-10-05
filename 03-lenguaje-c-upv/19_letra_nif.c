/* Video 19 - Calculo de la letra del NIF
   (NUEVO) La letra es la posicion (DNI % 23) de la tabla oficial. */
#include <stdio.h>

int main()
{
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    long dni;

    printf("Numero de DNI (8 cifras): ");
    scanf("%ld", &dni);

    if (dni < 0 || dni > 99999999) {
        printf("DNI no valido.\n");
        return 1;
    }

    printf("NIF completo: %08ld%c\n", dni, letras[dni % 23]);
    return 0;
}
