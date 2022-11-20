#include <stdio.h>
#define MAX_SIZE 1000

//program to find maximum and minimum element in an array. 

int main ()
{
    int arr [MAX_SIZE];
    int N;
    int min=0, max=0;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);

    for (int i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

max=arr[0];
min =arr [1];

    for (int i=0; i<N; i++)
    {
        if (arr[i]>max)
        {
            max = arr [i];
        }

        if (arr [i<min])
        {
            min=arr[i];
        }
                 
    }
     printf ("El maximo es: %d \n", max);
     printf("El minimo es: %d \n", min);
}
