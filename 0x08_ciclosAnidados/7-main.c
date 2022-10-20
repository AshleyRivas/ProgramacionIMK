#include <stdio.h>

//programa para imprimir mas patrones de estrellas

int main()
{
    int N;

    printf("Numero de entradas : \n");
    scanf("%d", &N);

    for(int i=1; i<=(N * 2 - 1); i++)
    {
        if(i == N)
        {
            for(int j=1; j<=(N * 2 - 1); j++)
            {
                printf("+");
            }
        }
        else
        {
            for(int j=1; j<=N-1; j++)
            {
                printf(" ");
            }
            printf("+");
        }

        printf("\n");
    }

    return 0;
}
