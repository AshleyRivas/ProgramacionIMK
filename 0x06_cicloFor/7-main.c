#include <stdio.h>

//programa para encontrar la suma de numeros impares entre 1 an

int main (void)
{
    int n=0;
    int suma=0;

    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &n);
    printf ("La suma de los numeros impares es: \n");

    for (int i=1; i<=n; i++)
    {
        if ( i % 2 !=0)
        {
         suma=suma+i;
         printf ("%d \n", suma); 
        }
        
    }

    return (0);
}
