/* Video 36 - Programa para la gestion de asientos de un autobus
   (NUEVO) Vector de 40 asientos: 0 = libre, 1 = ocupado. */
#include <stdio.h>
#define ASIENTOS 40

void mostrar(int bus[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("%2d:%s  ", i + 1, bus[i] ? "X" : "-");
        if ((i + 1) % 4 == 0)
            printf("\n");
    }
}

int libres(int bus[], int n)
{
    int i, c = 0;

    for (i = 0; i < n; i++)
        if (bus[i] == 0)
            c++;
    return c;
}

int main()
{
    int bus[ASIENTOS] = {0};
    int opc, num;

    do {
        printf("\n1. Ver asientos  2. Reservar  3. Liberar  4. Salir\nOpcion: ");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                mostrar(bus, ASIENTOS);
                printf("Asientos libres: %d\n", libres(bus, ASIENTOS));
                break;
            case 2:
            case 3:
                printf("Numero de asiento (1-%d): ", ASIENTOS);
                scanf("%d", &num);
                if (num < 1 || num > ASIENTOS)
                    printf("Asiento inexistente.\n");
                else if (opc == 2 && bus[num - 1] == 1)
                    printf("Ese asiento ya esta ocupado.\n");
                else if (opc == 3 && bus[num - 1] == 0)
                    printf("Ese asiento ya esta libre.\n");
                else {
                    bus[num - 1] = (opc == 2);
                    printf("Hecho.\n");
                }
                break;
            case 4:
                printf("Adios.\n");
                break;
            default:
                printf("Opcion no valida.\n");
        }
    } while (opc != 4);

    return 0;
}
