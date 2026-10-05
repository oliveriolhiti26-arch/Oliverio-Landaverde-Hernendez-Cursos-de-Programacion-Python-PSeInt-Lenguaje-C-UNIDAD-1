/* Video 11 - Sentencia if ... else
   (ejercicios originales 3 y 4 unidos) */
#include <stdio.h>

int main()
{
    int edad, trab;

    printf("Dime tu edad: ");
    scanf("%d", &edad);
    if (edad < 18)
        printf("Eres menor de edad.\n");
    else
        printf("Eres mayor de edad. Puedes votar.\n");

    printf("Dime cuantos trabajos tienes: ");
    scanf("%d", &trab);
    if (trab < 0)
        printf("Error\n");
    else if (trab == 0)
        printf("Ponte a buscar\n");
    else if (trab == 1)
        printf("Enhorabuena\n");
    else
        printf("Eres pluriempleado\n");

    return 0;
}
