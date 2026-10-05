/* Video 2 - Operadores aritmeticos
   Superficie de un triangulo (ejercicio original 1) y uso de + - * / %. */
#include <stdio.h>

int main()
{
    float b, h;
    int a = 17, c = 5;

    printf("Dame la base y la altura del triangulo: ");
    scanf("%f%f", &b, &h);
    printf("La superficie del triangulo es: %.2f\n\n", b * h / 2);

    printf("%d + %d = %d\n", a, c, a + c);
    printf("%d - %d = %d\n", a, c, a - c);
    printf("%d * %d = %d\n", a, c, a * c);
    printf("%d / %d = %d (division entera)\n", a, c, a / c);
    printf("%d %% %d = %d (resto)\n", a, c, a % c);
    printf("%d / %d.0 = %.2f (division real)\n", a, c, a / (float)c);

    return 0;
}
