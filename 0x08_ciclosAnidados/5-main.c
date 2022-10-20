#include <stdio.h>

// programa para imprimir patrón de estrella de medio diamante.

int main()
{
    int N; //filas
    printf("Filas de entrada :\n");
    scanf("%d", &N);

    for (int i=1; i<=N; i++ )
    {
        
        for (int j=1; j<=i; j++ )
        {
            printf("*");

        }

        printf("\n");
    }
    
    for (int i=(N-2); i>=0; i-- )
    {
        
        for (int j=i; j>=0; j-- )
        {
            printf("*");

        }

        printf("\n");
    }

    return(0);
}
