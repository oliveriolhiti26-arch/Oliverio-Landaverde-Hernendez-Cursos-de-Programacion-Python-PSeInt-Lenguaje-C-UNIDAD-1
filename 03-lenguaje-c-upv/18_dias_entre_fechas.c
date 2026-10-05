/* Video 18 - Calculo del numero de dias entre dos fechas sobre ficheros
   (NUEVO) Lee de fechas.txt lineas con dos fechas "d m a  d m a"
   y escribe en dias.txt los dias que hay entre ellas. */
#include <stdio.h>

/* Dias transcurridos desde el 1/1/1 hasta la fecha dada */
long diasDesdeOrigen(int d, int m, int a)
{
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    long total;
    int i, y = a - 1;

    total = 365L * y + y / 4 - y / 100 + y / 400;   /* anios completos */
    for (i = 0; i < m - 1; i++)
        total += diasMes[i];
    if (m > 2 && ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0))
        total++;                                     /* 29 de febrero */
    return total + d;
}

int main()
{
    FILE *fe, *fs;
    int d1, m1, a1, d2, m2, a2;
    long dif;

    fe = fopen("fechas.txt", "r");
    fs = fopen("dias.txt", "w");
    if (fe == NULL || fs == NULL) {
        printf("Error al abrir los ficheros.\n");
        return 1;
    }

    while (fscanf(fe, "%d %d %d %d %d %d", &d1, &m1, &a1, &d2, &m2, &a2) == 6) {
        dif = diasDesdeOrigen(d2, m2, a2) - diasDesdeOrigen(d1, m1, a1);
        if (dif < 0)
            dif = -dif;
        fprintf(fs, "%02d/%02d/%04d - %02d/%02d/%04d : %ld dias\n", d1, m1, a1, d2, m2, a2, dif);
        printf("%02d/%02d/%04d - %02d/%02d/%04d : %ld dias\n", d1, m1, a1, d2, m2, a2, dif);
    }

    fclose(fe);
    fclose(fs);
    return 0;
}
