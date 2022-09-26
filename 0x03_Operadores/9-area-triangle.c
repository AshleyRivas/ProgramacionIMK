#include <stdio.h>

int main ()
{
    float altura;
    float base;
    float area;

    printf ("Ingrese la altura del trinagulo: \n");
    scanf ("%f", &altura);
    printf ("Ingrese la base del triangulo: \n");
    scanf ("%f", &base);
    area = (base * altura ) / 2; 

    printf ("El area del triangulo es: %.2f sq. unidades \n", area);

    return 0;
}
