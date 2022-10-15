#include <stdio.h>

int main ()
{
    int password=1234;
    printf ("Inicio del programa \n");
    while (password ==1234)
    {
        printf ("Ingrese un nuevo password \n");
        scanf ("%d", &password);
    }
    printf ("Fin del programa \n");

    return (0);
}
