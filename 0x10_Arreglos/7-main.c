#include <stdio.h>
#define MAX_SIZE 1000

//programa para contar el número total de elementos negativos en una matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N;
    int positivo=0, negativo=0;

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
            negativo++;
        } 
    }

    printf ("El total de los numeros negativos es: %d \n", negativo);
}
