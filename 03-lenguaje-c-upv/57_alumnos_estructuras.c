/* Video 57 - Caracterizacion de alumnos mediante estructuras
   (NUEVO) */
#include <stdio.h>
#define N 4

struct Alumno {
    char nombre[30];
    int edad;
    float nota;
};

int main()
{
    struct Alumno clase[N];
    int i, mejor = 0;
    float suma = 0;

    for (i = 0; i < N; i++) {
        printf("Alumno %d - nombre, edad y nota: ", i + 1);
        scanf("%29s %d %f", clase[i].nombre, &clase[i].edad, &clase[i].nota);
        suma += clase[i].nota;
        if (clase[i].nota > clase[mejor].nota)
            mejor = i;
    }

    printf("\n%-15s %5s %6s %s\n", "Nombre", "Edad", "Nota", "Situacion");
    for (i = 0; i < N; i++)
        printf("%-15s %5d %6.2f %s\n", clase[i].nombre, clase[i].edad, clase[i].nota,
               clase[i].nota >= 5 ? "Aprobado" : "Suspenso");

    printf("\nNota media: %.2f\n", suma / N);
    printf("Mejor alumno: %s (%.2f)\n", clase[mejor].nombre, clase[mejor].nota);
    return 0;
}
