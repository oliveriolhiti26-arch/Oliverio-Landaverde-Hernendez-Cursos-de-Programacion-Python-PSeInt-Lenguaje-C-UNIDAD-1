/* Video 59 - Estructuras y funciones: motores de clientes
   (NUEVO) Taller que guarda los motores de sus clientes. */
#include <stdio.h>
#include <string.h>
#define N 5

struct Motor {
    int codigo;
    char cliente[30];
    float potencia;   /* kW */
    int horas;        /* horas de uso */
};

void mostrarMotor(struct Motor m)
{
    printf("%4d  %-12s %7.1f kW  %6d h%s\n", m.codigo, m.cliente, m.potencia, m.horas,
           m.horas > 5000 ? "  <- revision" : "");
}

float potenciaCliente(struct Motor v[], int n, char cliente[])
{
    int i;
    float total = 0;

    for (i = 0; i < n; i++)
        if (strcmp(v[i].cliente, cliente) == 0)
            total += v[i].potencia;
    return total;
}

int main()
{
    struct Motor taller[N] = {
        {101, "Ruiz",   75.0, 3200},
        {102, "Lopez",  15.5, 6100},
        {103, "Ruiz",   30.0, 5400},
        {104, "Garcia", 110.0, 800},
        {105, "Lopez",  22.0, 1500}
    };
    char nombre[30];
    int i;

    printf("Cod   Cliente      Potencia     Horas\n");
    for (i = 0; i < N; i++)
        mostrarMotor(taller[i]);

    printf("\nCliente a consultar: ");
    scanf("%29s", nombre);
    printf("Potencia total de %s: %.1f kW\n", nombre, potenciaCliente(taller, N, nombre));
    return 0;
}
