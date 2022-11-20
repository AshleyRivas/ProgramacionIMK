#include <stdio.h>
#define MAX_SIZE 1000

//programa para leer e imprimir elementos de una matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N;

    printf ("ingrese el tamaño del arreglo: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);

    for (int i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    for (int i=0; i<N; i++)
    {
        printf ("Elemento arr [%d]: %d\n", i, arr[i]);
    }

    printf ("Elemento arr [%d]: %d\n", 1001, arr[1001]);
}
