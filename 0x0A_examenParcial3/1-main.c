#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main ()
{
   
    int F=10;
    int L=10;
    int i,j;
    char matr[F][L];
    int numero;
    int pares, impar, viva;
    char loc [F][L];

     int num =rand ()%11;
    printf ("%d", num); 

        for (i= 0; i < F; i++)
        {
        for (j=0; j<L; j++)
        {
        matr [F][L]=' ';
        if (num %2==0)
            matr [F][L]= '*';
        else 
            matr [F][L]= ' ';
        }
        printf ("\n");
    }

   
     for (i =0; i<F; i++ )
    {
        for (j=0; j<L; j++)
        {
         if ( numero %2 == 0)
        {
matr [2][2]='*';
matr [2][4]='*';
matr [2][6]= '*';
matr [2][8]= '*';
matr [2][10]= '*';
matr [4][2]='*';
matr [4][4]='*';
matr [4][6]= '*';
matr [4][8]= '*';
matr [4][10]= '*';
matr [6][2]='*';
matr [6][4]='*';
matr [6][6]= '*';
matr [6][8]= '*';
matr [6][10]= '*';
matr [8][2]='*';
matr [8][4]='*';
matr [8][6]= '*';
matr [8][8]= '*';
matr [8][10]= '*';
matr [10][2]='*';
matr [10][4]='*';
matr [10][6]= '*';
matr [10][8]= '*';
matr [10][10]= '*';
        }

else 
{
matr [1][1]=' ';
matr [1][3]=' ';
matr [1][5]= ' ';
matr [1][7]= ' ';
matr [1][9]= ' ';
matr [3][1]=' ';
matr [3][3]=' ';
matr [3][5]= ' ';
matr [3][7]= ' ';
matr [3][9]= ' ';
matr [5][1]=' ';
matr [5][3]=' ';
matr [5][5]= ' ';
matr [5][7]= ' ';
matr [5][9]= ' ';
matr [7][1]=' ';
matr [7][3]=' ';
matr [7][5]= ' ';
matr [7][7]= ' ';
matr [7][9]= ' ';
matr [9][1]=' ';
matr [9][3]=' ';
matr [9][5]= ' ';
matr [9][7]= ' ';
matr [9][9]= ' ';
}

}
}
           for (i = 0; i < F; i ++)
 {
     for( j = 0; j < L; j++)
     {
         printf("[%c]", matr[F][L]);
     }
     printf("\n");
 }

 if(matr[F][L]=='X')
{
 // celula viva 
    if(viva<=1 || viva>3)
    {
    loc[F][L]=' ';
     }
     else
     {
    loc[F][L]='X';
     }

    }
    else
    {
// celula muerta
    if(viva==3)
     {                       
    loc[F][L]='X';
    }
    else
    {
    loc[F][L]=' ';
    }

    }

    for (i=0; i<F; i++)
    {
        for (j=0; j<L; j++)
        {
            matr [F][L]= loc [F][L];
        }
    }

    }

