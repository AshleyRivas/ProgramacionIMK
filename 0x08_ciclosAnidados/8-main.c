#include <stdio.h>

//Programa para imprimir patrones de 8 estrellas

int main()
{
    int i, j, N;

    printf("Numero de entradas: ");
    scanf("%d", &N);

    for(int i=1; i<N*2; i++)
    {
        for(int j=1; j<=N; j++)
        {
            if((i==1 && (j==1 || j==N)) || 
               (i==N && (j==1 || j==N)) || 
               (i==N*2-1 && (j==1 || j==N)))
            {
                printf(" ");
            }
            else if(i==1 || i==N || i==(N*2)-1 || j==1 || j==N)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
