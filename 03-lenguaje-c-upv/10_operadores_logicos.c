/* Video 10 - Operadores logicos
   (ejercicio original 8: era una tabla, no codigo) Se comprueban en C
   los resultados que se habian calculado a mano. */
#include <stdio.h>

int main()
{
    printf("!(9 > 2)                -> %d\n", !(9 > 2));
    printf("!(!(9 > 2))             -> %d\n", !(!(9 > 2)));
    printf("(1 > 7) || (3 <= 41)    -> %d\n", (1 > 7) || (3 <= 41));
    printf("(!(9 > 8)) || (6 > 9)   -> %d\n", (!(9 > 8)) || (6 > 9));
    printf("(9 >= 8) && (4 == 4)    -> %d\n", (9 >= 8) && (4 == 4));
    printf("(8 >= 9) && (4 == 4)    -> %d\n", (8 >= 9) && (4 == 4));
    printf("(4.3 < 72) && (7 > 222) -> %d\n", (4.3 < 72) && (7 > 222));
    return 0;
}
