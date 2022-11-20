#include <stdio.h>
#define MAX_SIZE 1000

//programa para eliminar un elemento de una matriz en la posición especificada.

int main ()
{
    int arr [MAX_SIZE];
    int N, i;
    int posicion;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);
    
    for (i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    printf ("Ingrese la posicion que desea eliminar:  \n");
    scanf ("%d", &posicion);
   
   for(i=posicion; i<N; i++)
        {
            arr[i] = arr[i+1];
        }

        N--;

        printf("El arreglo queda asi:  ");

        for(i=0; i<N; i++)
    
        {
            printf("\n %d   \n", arr[i]);
        }
}
