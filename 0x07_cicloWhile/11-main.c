#include <stdio.h>

//programa para hallar la suma de los numeros impares del 1 al n

int main (void)
{
    int n=0;
    int i=1;
    int suma=0;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);
    printf ("La suma de los numeros naturales es: \n");

    while (i<=n)
    {
        if ( i % 2 !=0)
        {
         suma=suma+i;
         printf ("%d \n", suma); 
        }
        i++;
    }

    return (0);
}
