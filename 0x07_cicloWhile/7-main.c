#include <stdio.h>

//para imprimir el alfabeto 

int main ()
{
    char n = 'a';
    printf ("EL ALFABETO ES: \n");

    while (n<='z')
    {
        printf ("%c \n", n);
        n++;
    }
    return (0);
}
