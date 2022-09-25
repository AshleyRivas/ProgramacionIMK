#include "main.h"
#include <stdio.h>

// pide y multiplica dos numeros

int main (void)
{
    int mul (int a, int b);
    int n_1=0;
    int n_2=0;
    int resultado=0;

    printf("Introduzca un numero: \n");
    scanf ("%d", &n_1);

    printf("Introduzca un segundo numero: \n");
    scanf ("%d", &n_2);

    resultado =mul (n_1,n_2);
    printf ("El resultado de la siguiente multiplicacion es: %d \n", resultado);

    return 0;
}
