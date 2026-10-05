/* Video 22 - Sumatorio de un numero indeterminado de valores
   (ejercicios originales 17 y 18, que eran iguales) Se piden notas
   hasta que se introduce una fuera de rango (0-10) y se calcula la media. */
#include <stdio.h>

int main()
{
    float suma = 0, nota;
    int alumnos = 0;

    printf("Introduce notas (una fuera de 0-10 para terminar)\n");
    do {
        printf("Nota: ");
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            suma += nota;
            alumnos++;
        }
    } while (nota >= 0 && nota <= 10);

    if (alumnos > 0)
        printf("Nota media de %d alumnos: %.2f\n", alumnos, suma / alumnos);
    else
        printf("No se han puesto notas validas.\n");

    return 0;
}
