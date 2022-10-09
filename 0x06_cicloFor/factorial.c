#include "main.h"
#include <stdio.h>



int factorial (int n)
{
    int fact=1;
    for (int i=n; i>0; i--)
    {
        fact = fact *i;
    }
    return (fact);
}
