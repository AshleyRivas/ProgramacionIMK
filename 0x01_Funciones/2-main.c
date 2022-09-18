#include "main.h"
#include <stdio.h>

// suma de dos numeros, resta de dos numeros 

int main (void)
{
    int suma;
    int res;
    
    suma= add(12,10);
    res=resta (12,10);
    printf("El valor de la suma es:%d\n el valor de la resta es: %d\n",suma,res);

    return 0;
}

