#include <stdio.h>

//programa para imprimir patrón de estrella de flecha derecha

int main()
{
    int n;

    printf("Numero de entradas : \n");
    scanf("%d", &n);

    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(int j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(2*n - 2*i); j++)
        {
            printf(" ");
        }

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
