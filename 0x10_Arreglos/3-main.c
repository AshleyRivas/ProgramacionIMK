#include <stdio.h>
#define MAX_SIZE 1000 //arreglo de 100 espacios

//programa para encontrar la suma de todos los elementos de la matriz.

int main ()
{
    int arr [MAX_SIZE];
    int N;
    int suma=0;

    printf ("Ingrese la cantidad de numeros: \n");
    scanf ("%d", &N);

    printf ("Ingrese los %d numeros: \n", N);

    for (int i=0; i<N; i++)
    {
        scanf ("%d", &arr[i]);
    }

    for (int i=0; i<N; i++)
    {
        suma =suma + arr[i];
    }

     printf ("Elemento acumulado es: %d  \n", suma); 
}
