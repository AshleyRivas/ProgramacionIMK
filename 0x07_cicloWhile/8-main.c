#include <stdio.h>

//programa para imprimir todos los numeros pares del 1 al n

int main (void)
{
    int n;
    int i=1;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);

    printf ("Los numeros pares son: \n");


    while (i<=n)
    {
         if ( i % 2 ==0)
         {
         printf ("%d \n", i);
         }
        i++;
    }

    return (0);
}
