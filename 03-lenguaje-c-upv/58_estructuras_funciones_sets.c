/* Video 58 - Estructuras y funciones: sets de juego
   (NUEVO) Un partido de voleibol se guarda como un vector de sets.
   Gana el set quien llega a 25 puntos (15 en el 5o set, tie-break)
   con 2 de diferencia. Gana el partido quien gana 3 sets. */
#include <stdio.h>
#include <stdlib.h>
#define MAX_SETS 5

struct Set {
    int puntosA;
    int puntosB;
};

/* Devuelve 'A', 'B' o '?' si el resultado del set no es valido */
char ganadorSet(struct Set s, int limite)
{
    int dif = abs(s.puntosA - s.puntosB);

    if (s.puntosA >= limite && s.puntosA > s.puntosB && dif >= 2)
        return 'A';
    if (s.puntosB >= limite && s.puntosB > s.puntosA && dif >= 2)
        return 'B';
    return '?';
}

void mostrarSet(struct Set s, int numero, char ganador)
{
    printf("Set %d: %2d - %2d  -> gana %c\n", numero, s.puntosA, s.puntosB, ganador);
}

int main()
{
    struct Set partido[MAX_SETS] = {{25, 21}, {23, 25}, {27, 25}, {18, 25}, {15, 13}};
    int i, limite, setsA = 0, setsB = 0;
    char g;

    for (i = 0; i < MAX_SETS && setsA < 3 && setsB < 3; i++) {
        limite = (i == MAX_SETS - 1) ? 15 : 25;
        g = ganadorSet(partido[i], limite);
        mostrarSet(partido[i], i + 1, g);
        if (g == 'A')
            setsA++;
        else if (g == 'B')
            setsB++;
        else
            printf("  Resultado no valido para un set a %d puntos.\n", limite);
    }

    printf("\nSets ganados -> A: %d  B: %d\n", setsA, setsB);
    if (setsA == 3)
        printf("Gana el partido el equipo A.\n");
    else if (setsB == 3)
        printf("Gana el partido el equipo B.\n");
    else
        printf("Partido sin terminar.\n");
    return 0;
}
