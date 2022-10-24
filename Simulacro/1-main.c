#include <stdio.h>

int main(){
int litros_gasolina = 0;
int millas = 0;
float galon = 1;
float final = 0;
do{
printf("ingresa los litro de gasolina usados\n");
scanf("%d",&litros_gasolina);

printf("ingresa las millas recorridas\n");
scanf("%d",&millas);

galon = litros_gasolina * .264179;
final = millas / galon;

printf("el carro da %f galones por %d millares recorridas\n", galon, millas);
printf("da un rendimiento de %f galones por milla\n", final);
printf("para terminar el programa ingrese ceros\n");
}
while(litros_gasolina != 0 && millas != 0);
}
