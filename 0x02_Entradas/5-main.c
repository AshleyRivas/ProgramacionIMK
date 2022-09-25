#include "main.h"
#include <stdio.h>

// pide y divide dos numeros

int main (void)
{
    float div (int a, int b);
    int n_1=0;
    int n_2=0;
    int resultado=0;

    printf("Introduzca un numero: \n");
    scanf ("%d", &n_1);

    printf("Introduzca un segundo numero: \n");
    scanf ("%d", &n_2);

    resultado =div (n_1,n_2);
    printf ("El resultado de la siguiente division es: %d \n", resultado);

    return 0;
}
