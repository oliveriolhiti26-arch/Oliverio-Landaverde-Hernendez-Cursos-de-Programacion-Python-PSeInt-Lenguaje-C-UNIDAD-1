/* Video 5 - Calculo de precios segun categorias
   (ejercicio original 2) Precio sin IVA de productos gold y silver
   con IVA general y reducido. */
#include <stdio.h>

int main()
{
    float gold = 10, silver = 5;
    float IVAg = 0.16, IVAr = 0.10;

    printf("- Productos con el IVA general:\n");
    printf("  Productos gold,   precio sin IVA %.2f pesos.\n", gold / (1 + IVAg));
    printf("  Productos silver, precio sin IVA %.2f pesos.\n", silver / (1 + IVAg));

    printf("\n- Productos con el IVA reducido:\n");
    printf("  Productos gold,   precio sin IVA %.2f pesos.\n", gold / (1 + IVAr));
    printf("  Productos silver, precio sin IVA %.2f pesos.\n", silver / (1 + IVAr));

    return 0;
}
