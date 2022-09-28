#include <stdio.h>
#include "main.h"


int main()
{
    int consumo;
    float cobro;

    char opcion;

    printf("Elija la tarifa en la que se encuentre: \n");
    printf("a - Tarifa 1A \n");
    printf("b - Tarifa 1B \n");
    printf("c - Tarifa 1C \n");
    printf("d - Tarifa 1D \n");
    printf("e - Tarifa 1E \n");
    printf("f - Tarifa 1F \n");
    printf("x - Tarifa 1X \n");
    scanf("%c",&opcion);

    printf("\nIngrese su consumo mensual en KWh: \n");
    scanf("%d",&consumo);

    switch (opcion)
    {
        case 'a':
        cobro = tarifa1A (consumo);
        break;
        case 'b':
        cobro= tarifa1B (consumo);
        break;
        case 'c':
        cobro = tarifa1C (consumo);
        break;
        case 'd':
        cobro = tarifa1D (consumo);
        break;
        case 'e':
        cobro = tarifa1E (consumo);
        break;
        case 'f':
        cobro = tarifa1F (consumo);
        break;
        case 'x':
        cobro = tarifa1X (consumo);
        break;
        default:
        printf("Opcion no valida\n");
        return(1);
    }
    printf("El costo a pagar por KWh es de: %.2f\n",cobro);
}
