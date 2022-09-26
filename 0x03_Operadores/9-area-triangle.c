#include <stdio.h>

int main ()
{
    float altura;
    float base;
    float area;

    area = (base * altura ) / 2;

    printf ("Ingrese la altura del trinagulo: %d \n");
    scanf ("%f", &altura);
    printf ("Ingrese la base del triangulo: %d \n");
    scanf ("%f", &base);

    printf ("El area del triangulo es: %.2f sq. unidades \n", area);

    return 0;
}
