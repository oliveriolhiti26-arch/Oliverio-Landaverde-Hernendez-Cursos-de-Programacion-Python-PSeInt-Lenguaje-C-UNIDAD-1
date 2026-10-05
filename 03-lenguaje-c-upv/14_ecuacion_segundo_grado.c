/* Video 14 - Resolucion de ecuaciones de segundo grado
   (ejercicios originales 6 y 11, que eran iguales. Se anade el caso a == 0,
   que antes provocaba una division entre cero). */
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, D;

    printf("\nEcuaciones de segundo grado:  ax^2 + bx + c = 0\n\n");
    printf("Introduce valor de a: ");
    scanf("%f", &a);
    printf("Introduce valor de b: ");
    scanf("%f", &b);
    printf("Introduce valor de c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b != 0)
            printf("No es de segundo grado. Ecuacion lineal: x = %.2f\n", -c / b);
        else
            printf("No es una ecuacion valida.\n");
        return 0;
    }

    D = b * b - 4 * a * c;
    if (D == 0)
        printf("Sol.: %.2f\n", -b / (2 * a));
    else if (D > 0) {
        printf("Sol. 1: %.2f\n", (-b + sqrt(D)) / (2 * a));
        printf("Sol. 2: %.2f\n", (-b - sqrt(D)) / (2 * a));
    }
    else { /* D < 0: soluciones complejas */
        printf("Sol. 1: %.2f + %.2f i\n", -b / (2 * a), sqrt(-D) / (2 * a));
        printf("Sol. 2: %.2f - %.2f i\n", -b / (2 * a), sqrt(-D) / (2 * a));
    }
    return 0;
}
