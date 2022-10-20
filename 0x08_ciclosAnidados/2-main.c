#include <stdio.h>

int main ()
{
    int fila, columnas;
    printf ("Ingrese el numero de filas: \n");
    scanf ("%d", &fila);
    printf("ingrese el numero de columnas: \n");
    scanf ("%d", &columnas);

    for (int i=0;i<fila;i++)
    {
        for (int j=0; j<columnas; j++)
        {
            printf("*");
        }
        printf ("\n");
    }
    return (0);
}