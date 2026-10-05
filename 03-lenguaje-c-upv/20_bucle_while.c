/* Video 20 - Implementacion de bucles con while
   (ejercicio original 20 CORREGIDO: estaba escrito en C++ con cout/cin,
   se pasa a C con printf/scanf). */
#include <stdio.h>

int main()
{
    int numero;
    int suma = 0;

    printf("Ingresa numeros para sumarlos.\n");
    printf("Escribe 0 para terminar.\n");

    printf("Numero: ");
    scanf("%d", &numero);

    while (numero != 0) {
        suma += numero;
        printf("Numero: ");
        scanf("%d", &numero);
    }

    printf("La suma total es: %d\n", suma);
    return 0;
}
