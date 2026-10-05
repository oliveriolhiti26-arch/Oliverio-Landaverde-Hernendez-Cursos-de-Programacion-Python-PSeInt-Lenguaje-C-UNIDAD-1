/* Video 60 - Estructuras y funciones: ejemplo de robots electricos
   (NUEVO) Se pasan estructuras por valor (consultar) y por puntero (modificar). */
#include <stdio.h>

struct Robot {
    char nombre[20];
    float bateria;     /* porcentaje 0-100 */
    float consumo;     /* % de bateria por hora */
};

float autonomia(struct Robot r)
{
    return r.bateria / r.consumo;
}

void trabajar(struct Robot *r, float horas)
{
    r->bateria -= horas * r->consumo;
    if (r->bateria < 0)
        r->bateria = 0;
}

void recargar(struct Robot *r)
{
    r->bateria = 100;
}

void mostrar(struct Robot r)
{
    printf("%-8s bateria %5.1f%%  autonomia %.1f h\n", r.nombre, r.bateria, autonomia(r));
}

int main()
{
    struct Robot flota[3] = {{"R2", 100, 12.5}, {"Atlas", 80, 20}, {"Wall-E", 45, 5}};
    int i;

    printf("Estado inicial:\n");
    for (i = 0; i < 3; i++)
        mostrar(flota[i]);

    for (i = 0; i < 3; i++)
        trabajar(&flota[i], 4);
    printf("\nTras 4 horas de trabajo:\n");
    for (i = 0; i < 3; i++)
        mostrar(flota[i]);

    printf("\nSe recargan los robots con menos del 30%%:\n");
    for (i = 0; i < 3; i++) {
        if (flota[i].bateria < 30)
            recargar(&flota[i]);
        mostrar(flota[i]);
    }
    return 0;
}
