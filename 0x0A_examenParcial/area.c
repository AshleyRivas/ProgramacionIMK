#include "main.h"
#include <math.h>
#include <stdio.h>

int area(float volumen, float densidad, float costoAnterior)
{
   float radiox, areax, area, y;
   float costo1, costo2 = 2.45;
   float pi= 3.1416;
   float gramos;

    radiox = cbrt((2*volumen)/(4*pi));  

    areax = (2*pi*( pow(radiox,2)) + 2 * pi * radiox* (volumen/( pi* pow(radiox,2  ))));

    y = (volumen/(pi*pow(radiox,2)));

    costo1 = areax * costo2;
    costo1 = costo1 /1000;

    gramos = volumen * densidad;
    float nuevo = costoAnterior - costo1;

    
    printf("El radio de la tapa: %.2f cm\n", radiox);
    printf("Area total de la lata: %.2f cm2\n", areax);   
    printf("Costo de fabricacion: $ %.2f\n", costo1);     
    printf("Costo anterior para lata es: $ %.2f\n",costoAnterior);
    printf("Ahorro: $ %.2f\n", nuevo);
    printf("ml a gramos = %.2f gr\n",gramos);
}
