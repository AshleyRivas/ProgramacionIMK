#include <stdio.h>
#include "main.h"
#include <math.h>


int main()
{
    float volumen;
    float costo;
    float densidad;
    
    char opcion;

    printf("Elija el tipo de producto: \n");
    printf("a - aceite \n");
    printf("b - alcohol \n");
    printf("c - gasolina \n");
    printf("d - acetona \n");
    scanf("%c",&opcion);

    printf("\nIngrese el volumen a envasar: \n");
    scanf("%e",&volumen);

    if (volumen == 500) 
    {
        costo = 1.006;
    }

    else if (volumen == 1000)
    {
        costo = 1.6816;
    }

    else if (volumen == 1500)
    {
        costo = 1.9610;
    }

    else
    {
        costo = 3.1038;
    }
    

    switch(opcion)
    {
        case 'a': 
        densidad = 0.9;
        area(volumen, densidad, costo);
        break;

        case 'b': 
        densidad = 0.8;
        area(volumen, densidad, costo);
        break;

        case 'c': 
        densidad = 0.68; 
        area(volumen, densidad, costo);
        break;

        case 'd': 
        densidad = 0.79;
        area(volumen, densidad, costo);
        break;

        default:
        printf("Opción no válida\n");
        break;
    }
  
}


    

