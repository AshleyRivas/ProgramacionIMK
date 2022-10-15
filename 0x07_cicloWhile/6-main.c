#include <stdio.h>

//programa para encontrar la suma del primer y último dígito usando el bucle while

int main ()
{
    int n;
    int suma=0;
    int n1, n2;

    printf ("Ingrese los numeros: \n");
    scanf ("%d", &n);
     n2=n %10;

    while (n>=10)
    {
       n =n/10;
    }   
    n1 =n;

    suma= n1+n2;
     printf("La suma del primer y segundo digito es: %d \n", suma);

    return (0);
}
