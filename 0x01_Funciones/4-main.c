#include "main.h"
#include <stdio.h>

//multiplica dos numeros

int main (void)
{
    int resultado = 0;
    int mul (int a, int b); 

    resultado= mul (12,10);
    printf ("El resultado de la multiplicación es: %d \n", resultado);
    resultado= mul (5,25);
    printf ("El resultado de la multiplicación es: %d \n", resultado);
    resultado = mul (0, 67);
    printf ("El resultado de la multiplicación es: %d \n", resultado);
    return 0;

}
