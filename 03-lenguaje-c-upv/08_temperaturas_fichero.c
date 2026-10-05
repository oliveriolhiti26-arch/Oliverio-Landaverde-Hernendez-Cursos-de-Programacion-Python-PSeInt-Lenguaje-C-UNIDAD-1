/* Video 8 - Guardar en fichero datos de temperaturas
   (ejercicio original 16, mejorado: se abre en modo "a" para ir
   acumulando registros en lugar de borrar los anteriores). */
#include <stdio.h>

int main()
{
    int mes, dia;
    float temp;
    FILE *f;

    f = fopen("temperaturas.txt", "a");
    if (f == NULL) {
        printf("Error abriendo fichero\n");
        return 1;
    }

    printf("Dame el dia: ");
    scanf("%d", &dia);
    printf("Dame el mes: ");
    scanf("%d", &mes);
    printf("Dame la temperatura: ");
    scanf("%f", &temp);

    fprintf(f, "%d %d %.2f\n", dia, mes, temp);
    fclose(f);

    printf("Registro guardado en temperaturas.txt\n");
    return 0;
}
