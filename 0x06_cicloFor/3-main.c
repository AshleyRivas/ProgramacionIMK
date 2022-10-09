#include <stdio.h>

//programa para imprimir alfabetos de la a a la z

int main (void)
{
    
    printf ("Inicio del alfabeto: \n");

    for (char i= 'a'; i <= 'z'; i++)
    {
    printf ("%c\n", +i);
    }

    printf ("Fin del alfabeto \n");
    return (1);
}
