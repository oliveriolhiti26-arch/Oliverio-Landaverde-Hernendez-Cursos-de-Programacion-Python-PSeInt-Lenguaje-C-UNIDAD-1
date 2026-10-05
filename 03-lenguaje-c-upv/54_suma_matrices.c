/* Video 54 - Suma de matrices
   (NUEVO) C = A + B, ambas de FIL x COL. */
#include <stdio.h>
#define FIL 2
#define COL 3

void leerMatriz(int m[FIL][COL], char nombre)
{
    int i, j;

    printf("Matriz %c (%dx%d):\n", nombre, FIL, COL);
    for (i = 0; i < FIL; i++)
        for (j = 0; j < COL; j++) {
            printf("  %c[%d][%d] = ", nombre, i, j);
            scanf("%d", &m[i][j]);
        }
}

void mostrarMatriz(int m[FIL][COL])
{
    int i, j;

    for (i = 0; i < FIL; i++) {
        for (j = 0; j < COL; j++)
            printf("%5d", m[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[FIL][COL], B[FIL][COL], C[FIL][COL];
    int i, j;

    leerMatriz(A, 'A');
    leerMatriz(B, 'B');

    for (i = 0; i < FIL; i++)
        for (j = 0; j < COL; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("\nA + B =\n");
    mostrarMatriz(C);
    return 0;
}
