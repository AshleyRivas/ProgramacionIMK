#include <stdio.h>

int main ()
{
    int n;
    printf ("Ingrese el numero de filas: \n");
    scanf ("%d", &n);

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf ("*");
        }
        printf ("*");
    }
    return (0);
}
