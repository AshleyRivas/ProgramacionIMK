#include <math.h>
#include <stdio.h>
int main ()
{
float a = 0;
float b = 0;
float c = 0;
float d= 0;
float area = 0;
printf("introduce los lados del triangulo:\n");
scanf("%f""%f""%f", &a, &b, &c);
if (a + b > c &&  a + c > b && c + b > a)
{
    d = (a + b + c)/2;
    area = sqrt(d*(d-a)*(d-b)*(d-c));
    printf("El perimetro del triangulo es %f\n", d*2);
    printf("el area del triangulo es: %f\n", area);
}
else
printf("el triangulo no existe");
}