#include <stdio.h>

//para imprimir numeros naturales al revés del n al 1

int main (void)
{
    int n;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);

    printf ("Inicio del conteo: \n");

    for (int i=n; i>=1; i--)
    {
    printf ("%d\n", i);
    }

    printf ("Fin del conteo \n");
    return (1);
}