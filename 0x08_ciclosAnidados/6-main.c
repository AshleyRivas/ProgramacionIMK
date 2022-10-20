#include <stdio.h>

//programa para imprimir patrón de estrella de diamante hueco

int main()
{
    int i, j, n;

    printf("Numero de entrada : \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)
        {
            printf(" ");
        }

        for(j=i; j<=n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
