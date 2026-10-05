/* Video 61 - Uso de estructuras
   (NUEVO) typedef, estructuras anidadas, asignacion entre estructuras
   y vector de estructuras. */
#include <stdio.h>
#include <string.h>

typedef struct {
    int dia, mes, anio;
} Fecha;

typedef struct {
    char nombre[30];
    Fecha nacimiento;     /* estructura dentro de otra */
    float salario;
} Empleado;

void mostrarEmpleado(Empleado e)
{
    printf("%-10s nacido el %02d/%02d/%04d  salario %.2f\n",
           e.nombre, e.nacimiento.dia, e.nacimiento.mes, e.nacimiento.anio, e.salario);
}

void subirSalario(Empleado *e, float porcentaje)
{
    e->salario *= 1 + porcentaje / 100;
}

int main()
{
    Empleado plantilla[3];
    Empleado copia;
    int i;

    strcpy(plantilla[0].nombre, "Ana");
    plantilla[0].nacimiento.dia = 12;
    plantilla[0].nacimiento.mes = 5;
    plantilla[0].nacimiento.anio = 1990;
    plantilla[0].salario = 18000;

    plantilla[1] = plantilla[0];             /* asignacion completa */
    strcpy(plantilla[1].nombre, "Luis");
    plantilla[1].nacimiento.anio = 1985;
    plantilla[1].salario = 21000;

    printf("Datos del tercer empleado (nombre dia mes anio salario): ");
    scanf("%29s %d %d %d %f", plantilla[2].nombre, &plantilla[2].nacimiento.dia,
          &plantilla[2].nacimiento.mes, &plantilla[2].nacimiento.anio, &plantilla[2].salario);

    copia = plantilla[0];
    for (i = 0; i < 3; i++)
        subirSalario(&plantilla[i], 5);

    printf("\nPlantilla tras subir un 5%%:\n");
    for (i = 0; i < 3; i++)
        mostrarEmpleado(plantilla[i]);
    printf("\nCopia hecha antes de la subida (no cambia):\n");
    mostrarEmpleado(copia);
    printf("\nTamano de Empleado: %d bytes\n", (int)sizeof(Empleado));
    return 0;
}
