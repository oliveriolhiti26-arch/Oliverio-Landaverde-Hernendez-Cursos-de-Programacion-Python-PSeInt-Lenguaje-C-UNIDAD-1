/* Video 35 - Calculo del producto vectorial
   (NUEVO) u x v = (u2*v3 - u3*v2, u3*v1 - u1*v3, u1*v2 - u2*v1) */
#include <stdio.h>

void leerVector(float v[3], char nombre)
{
    printf("Componentes x y z del vector %c: ", nombre);
    scanf("%f %f %f", &v[0], &v[1], &v[2]);
}

void productoVectorial(float u[3], float v[3], float r[3])
{
    r[0] = u[1] * v[2] - u[2] * v[1];
    r[1] = u[2] * v[0] - u[0] * v[2];
    r[2] = u[0] * v[1] - u[1] * v[0];
}

float productoEscalar(float u[3], float v[3])
{
    return u[0] * v[0] + u[1] * v[1] + u[2] * v[2];
}

int main()
{
    float u[3], v[3], r[3];

    leerVector(u, 'u');
    leerVector(v, 'v');
    productoVectorial(u, v, r);

    printf("u x v = (%.2f, %.2f, %.2f)\n", r[0], r[1], r[2]);
    printf("Comprobacion: (u x v) . u = %.2f  y  (u x v) . v = %.2f  (deben ser 0)\n",
           productoEscalar(r, u), productoEscalar(r, v));
    return 0;
}
