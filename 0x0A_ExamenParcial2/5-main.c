#include <stdio.h>
int main()
{
    char dia;
    int hora;
    int minuto;
    int d=0;
    float costo;
    float precio_por_minuto;
while (1)
{
    printf("Para calcular el costo de una llamada presione 1, para finalizar la operación, presiona cualquier otra tecla.\n");
    scanf(" %d",&d);
    if (d == 1)
    {
    printf("Ingrese el dia que se realizó la llamada:\nLunes = L\nMartes = M\nMiercoles = X\nJueves = J\nSabado = S\nDomingo = D\n");
    scanf(" %c", &dia);
    if ( dia == 'l' || dia == 'm' || dia == 'x' || dia == 'j' || dia == 'v' || dia == 's' ||dia == 'd' || dia == 'L' || dia == 'M' || dia == 'X' || dia == 'J' || dia == 'V' || dia == 'S' ||dia == 'D')
    {
    
    printf("Ingrese la hora en que se realizó la llamada en notacion de 24 horas.\n");
    scanf(" %d",&hora);
    if (hora < 0 || hora > 2400)
    {
        printf("Opcion no válida \n");
        return (0);
    }else{
    
    printf("Ingrese la duración de la llamada en minutos.\n");
    scanf(" %d",&minuto);
    if (dia == 'S' || dia == 's' ||dia == 'D' ||dia == 'd')
    {
     precio_por_minuto = 0.15;

    }
    else
    {
        if (hora < 600 || hora > 2000)
        {
            precio_por_minuto = 0.20;
        }else{
            precio_por_minuto = 0.30;
        }
    }
    costo = precio_por_minuto * minuto;

    printf("El precio por la llamada es:\n");
    printf("%f\n", costo);



    }}else
    {
        printf("Opcion no válida \n");
        return (0);
    }
    }else
    {
        return 0;
    }   
}
}