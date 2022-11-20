#include <stdio.h>
#define MAX_SIZE 1000

//programa para imprimir todos los elementos negativos en una matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);

    for (int i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    for (int i=0; i<N; i++)
    {
        if (arr[i]<0)
        {
            printf ("Elemento arr [%d]: %d es negativo \n", i, arr[i]);
        }   
    }
}
