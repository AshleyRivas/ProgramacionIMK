#include <stdio.h>
#include "main.h"

int tarifa1A(int consumo)
{     
    float consumo_basico = 0;
    float consumo_bajo = 0;
    float consumo_excedente = 0;

    if (consumo >= 0 && consumo <= 100)
    {
        consumo_basico = 0.786 * consumo;
        printf("Consumo basico \n");   
    }
     if (consumo >= 101 && consumo <= 150)
    {
        consumo_basico = 175 * .786;
        consumo_bajo = (consumo - 100) * 0.911;
        printf("Consumo bajo \n");           
    }
     if (consumo >= 151)
    {
        consumo_basico = 175 * .786;
        consumo_bajo = (150-100) * .911; 
        consumo_excedente = (consumo - 150) * 3.134;

        printf("Consumo excedente \n");    
    }
    printf("Cobro por consumo basico: %.2f\n",consumo_basico);
    printf("Cobro por consumo bajo: %.2f\n",consumo_bajo);
    printf("Cobro por consumo excedente: %.2f\n",consumo_excedente);
    return (consumo_excedente + consumo_bajo + consumo_basico);

}
