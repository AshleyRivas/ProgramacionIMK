#include "main.h"
#include <stdio.h>


int main ()
{

    float resultado;
    float largo;
    float ancho; 

    printf ("Ingrese el largo del rectangulo: \n ");
    scanf ("%f", &largo);
    printf ("Ingrese el ancho del rectangulo: \n ");
    scanf ("%f", &ancho);
    resultado = area(largo, ancho);

    printf ("El area del rectangulo es: %f unidades \n", resultado);

    return 0;
}
