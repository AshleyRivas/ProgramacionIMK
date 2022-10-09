#include <stdio.h>

//para imprimir todos los números naturales del 1 al n

int main (void)
{
    int n=1;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);

    printf ("Inicio del conteo: \n");

    for (int i=1; i<=n; i++)
    {
    printf ("%d\n", i);
    }

    printf ("Fin del conteo \n");
    return (1);
}
