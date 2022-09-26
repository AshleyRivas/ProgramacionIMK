#include <stdio.h>


int main ()
{
    int a, b, c;
   

    printf ("Ingrese dos angulos del triangulo: \n");
    scanf ("%d %d", &a, &b);
    c=180- (a + b);

    printf ("El angulo es: %d \n",c);
    
    return 0;
}
