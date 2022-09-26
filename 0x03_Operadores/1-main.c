#include "main.h"
#include <stdio.h>

// perimetro de un rectangulo 

int main (void)
{
    float resultado;
    float largo;
    float ancho;
    
    printf ("Ingrese el largo del rectangulo: \n ");
    scanf ("%f", &largo);
    printf ("Ingrese el ancho del rectangulo: \n ");
    scanf ("%f", &ancho);
    resultado= perimetro (largo, ancho);
    
    printf ("El perimetro del rectangulo es: %f unidades \n", resultado);

    return 0;
}
