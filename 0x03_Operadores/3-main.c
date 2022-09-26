#include "main.h"
#include <stdio.h>

// circunferenica, diametro y area de un circulo

int main (void)
{
    float resultado;
    float area;
    float circunferencia;
    float diametro;
    float radio;
  
    printf ("Ingrese el radio del circulo: \n ");
    scanf ("%f", &radio);

    diametro = diametroC(radio);
    area = areaC(radio);
    circunferencia = circunferenciaC(radio);


    printf ("El diametro del circulo es: %.2f unidades \n", diametro);
    printf ("El area del circulo es: %.2f sq. unidades \n", area );
    printf ("La circunferencia del circulo es:%.2f unidades \n", circunferencia);

    return 0;
}
