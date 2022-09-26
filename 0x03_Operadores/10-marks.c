#include <stdio.h>

int main ()
{
    float Promedio, final, porcentaje;
    float algebra, fisica, quimica, biologia, historia;

    printf ("Introduzca la nota de cinco materias: \n");
    scanf ("%f%f%f%f%f", &algebra, &fisica, &quimica, &biologia, &historia);
    
    final = algebra + fisica + quimica + biologia + historia;
    Promedio= final / 5.0;
    porcentaje = (final / 500.0) * 100;

    printf ("Su Promedio es: %.2f \n", Promedio);
    printf ("Su porcentaje es: %.2f \n", porcentaje);
    printf ("Su nota final es: %.2f \n", final);

    return 0;
}
