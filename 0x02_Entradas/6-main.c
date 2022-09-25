#include "main.h"
#include <stdio.h>

// pide y realiza el modulo de dos numeros

int main (void)
{
    float mod (int a, int b);
    int n_1=0;
    int n_2=0;
    int resultado=0;

    printf("Introduzca un numero: \n");
    scanf ("%d", &n_1);

    printf("Introduzca un segundo numero: \n");
    scanf ("%d", &n_2);

    resultado =mod (n_1,n_2);
    printf ("El resultado del siguiente modulo es: %d \n", resultado);

    return 0;
}
