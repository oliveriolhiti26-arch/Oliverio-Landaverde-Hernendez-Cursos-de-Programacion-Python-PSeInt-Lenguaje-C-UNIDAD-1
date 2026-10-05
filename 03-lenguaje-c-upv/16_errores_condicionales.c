/* Video 16 - Errores mas comunes en sentencias condicionales
   (ejercicio original 13, ampliado con los errores tipicos comentados) */
#include <stdio.h>

int main()
{
    int V;

    printf("Dame el valor de V: ");
    scanf("%d", &V);

    /* ERROR 1: escribir  if (4 < V < 9)
       Se evalua (4 < V) -> 0 o 1, y luego 0/1 < 9 -> SIEMPRE cierto.
       CORRECTO: unir dos comparaciones con && */
    if (4 < V && V < 9)
        printf("V esta entre 4 y 9: CIERTO\n");
    else
        printf("V esta entre 4 y 9: FALSO\n");

    /* ERROR 2: usar = (asignacion) en lugar de == (comparacion)
       if (V = 0) asigna 0 a V y la condicion es siempre falsa. */
    if (V == 0)
        printf("V es cero\n");
    else
        printf("V no es cero\n");

    /* ERROR 3: poner ; despues del if ->  if (V > 100);
       el ; es una sentencia vacia y el bloque siguiente se ejecuta siempre. */
    if (V > 100)
        printf("V es mayor que 100\n");

    /* ERROR 4: olvidar las llaves cuando hay varias sentencias. */
    if (V < 0) {
        printf("V es negativo\n");
        printf("Su valor absoluto es %d\n", -V);
    }
    return 0;
}
