#include <stdio.h>
#define MAX_SIZE 1000

//programa para insertar un elemento en una matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N, nuevo, i;
    int posicion;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);
    
    for (i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    printf ("Ingrese el nuevo numero: \n");
    scanf ("%d", &nuevo);
    printf ("Ingrese en que posicion desea colocar el numero:  \n");
    scanf ("%d", &posicion);
   
   if(posicion < N)
    {
        for(i=N; i>=posicion; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[posicion-1] = nuevo;
        N++;

        printf("El arreglo queda asi:  \n");

        for(int i=0; i<N; i++)
    
        {
            printf("\n %d   \n", arr[i]);
        }
    }
}
