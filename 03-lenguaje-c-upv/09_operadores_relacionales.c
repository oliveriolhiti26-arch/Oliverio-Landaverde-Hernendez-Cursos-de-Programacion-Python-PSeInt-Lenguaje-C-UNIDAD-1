/* Video 9 - Operadores relacionales
   (ejercicio original 7: estaba en .txt) Se comprueban en C los resultados
   que se habian calculado a mano. */
#include <stdio.h>

int main()
{
    printf("2 == 5 / 2      -> %d\n", 2 == 5 / 2);
    printf("(2 == 5) / 2    -> %d\n", (2 == 5) / 2);
    printf("1 == 8 > -2     -> %d\n", 1 == 8 > -2);
    printf("2 + 1 < 3 %% 7   -> %d\n", 2 + 1 < 3 % 7);
    /* "7 > 6 > 5" no es como en matematicas: C evalua primero (7 > 6) -> 1
       y despues 1 > 5 -> 0. Los parentesis muestran ese orden. */
    printf("7 > 6 > 5       -> %d\n", (7 > 6) > 5);
    printf("5 < 6 < 7       -> %d\n", (5 < 6) < 7);
    return 0;
}
