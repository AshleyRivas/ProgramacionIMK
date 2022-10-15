#include <stdio.h>

// programa para imprimir todos los numeros naturales del 1 al n

int main ()
{
    int numero=1;
    int contador =1;
    printf ("Ingrese el valor de n: \n");
    scanf ("%d", &numero);
    printf ("\n Los numeros naturales de %d son %d:\n", numero, contador);

    while (contador<=numero){
        printf("%d \n", contador);
        contador++;
    }    
    printf ("\n");
    return (0);
}
