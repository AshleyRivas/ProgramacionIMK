#include "main.h"
#include <stdio.h>

    int tarifa1E (int consumo)
    {
        float consumo_basico = 0;
        float consumo_bajo = 0;
        float consumo_alto = 0;
        float consumo_excedente = 0;
        
        if (consumo >= 0 && consumo <= 300)
        {
            consumo_basico = 0.786 * consumo;
            printf ("Consumo basico \n");
        }
        if (consumo >= 301 && consumo <= 750)
        {
            consumo_basico = 175* .786;
            consumo_bajo = (consumo - 175)* 0.911;
            printf ("Consumo bajo \n");
        }
        if (consumo >= 751 && consumo <= 900)
        {
            consumo_basico = 175 * .786;
            consumo_bajo = (400 - 175) * 0.911;
            consumo_alto = (consumo - 400)* 1.177;
            printf ("Consumo alto \n");

        }
        if (consumo >= 901)
        {
            consumo_basico = 175 * .786;
            consumo_bajo = (400 - 175) * 0.911;
            consumo_alto = (600 - 175) * 1.177;
            consumo_excedente = (consumo -600) * 3.134;

            printf ("Consumo excedente \n");
        }
        printf ("Costo por el consumo basico: %.2f\n", consumo_basico);
        printf("Costo por el consumo bajo: %.2f\n", consumo_bajo);
        printf ("Costo por el consumo alto: %.2f\n ", consumo_alto);
        printf ("Costo por el consumo excedente: %.2f\n", consumo_excedente);
        return (consumo_basico + consumo_bajo + consumo_alto + consumo_excedente);

    }
