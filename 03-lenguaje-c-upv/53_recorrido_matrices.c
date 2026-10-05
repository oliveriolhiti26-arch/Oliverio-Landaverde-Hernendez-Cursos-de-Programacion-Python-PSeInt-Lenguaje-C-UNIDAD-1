/* Video 53 - Recorrido de matrices
   (NUEVO) Recorrido por filas y por columnas, con sumas parciales. */
#include <stdio.h>
#define FIL 3
#define COL 4

int main()
{
    int m[FIL][COL] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9, 10, 11, 12}};
    int i, j, suma;

    printf("Recorrido por filas:\n");
    for (i = 0; i < FIL; i++) {
        suma = 0;
        for (j = 0; j < COL; j++) {
            printf("%4d", m[i][j]);
            suma += m[i][j];
        }
        printf("   | suma fila %d = %d\n", i, suma);
    }

    printf("\nRecorrido por columnas:\n");
    for (j = 0; j < COL; j++) {
        suma = 0;
        for (i = 0; i < FIL; i++)
            suma += m[i][j];
        printf("Suma columna %d = %d\n", j, suma);
    }
    return 0;
}
