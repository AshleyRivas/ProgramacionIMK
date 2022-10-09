#include <stdio.h>
#include "main.h"

int main (void)
{
    int base, exp, resultado;
    printf("Ingrese la base: \n");
    scanf("%d", &base);
    printf("Ingrese el exponente: \n");
    scanf ("%d", &exp);

    resultado = potencia (base, exp);
    printf ("%d elevado a la potencia %d es: %d \n", base, exp, resultado);
    return (0);
}