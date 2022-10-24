#include<stdio.h>
#include<stdlib.h>

int main() {
    float millas=0;
	float galones= 1;
	float Total_de_Galones= 0;
	float Total_de_Millas= 0;

	printf("Ingresa los litros de gasolina que consumiste: ");
	scanf("%f",&galones);

	while (galones != -1) {
		printf("Ingresa las millas que recorriste: ");
		scanf("%f", &millas);

		if (galones != 0) {
			printf("El numero de millas/galon que consume el automovil es: %.4f\n", millas / galones);
			Total_de_Galones += galones;
			Total_de_Millas += millas;
		}

		printf("Ingrese los galones sonsumidos: ");
		scanf("%f", &galones);
	}

	printf("El numero de millas/galon que consume el automovil es:  %.4f\n", Total_de_Millas / Total_de_Galones);
	system("pause");
	return 1;
}
