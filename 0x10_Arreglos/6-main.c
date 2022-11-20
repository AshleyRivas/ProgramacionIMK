#include <stdio.h>
#define MAX_SIZE 1000

//programa para contar el número total de elementos pares e impares en una matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N;
    int pares=0, impar=0;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);

    for (int i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    for (int i=0; i<N; i++)
    {
        if (arr[i] % 2 == 1)
        {
            pares++;
        }
        else
        {
            impar++;
        }
    }

    printf ("Los numeros pares son: %d \n", pares);
    printf ("Los numeros impares son: %d \n", impar);
}
