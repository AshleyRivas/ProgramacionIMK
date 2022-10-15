#include <stdio.h>

int main ()
{
    int n=1;

    while (n<=10)
    {
        printf ("%d \n", n);
        n++;
        if (n ==7)
        {
            return (1);
        }
    }

    return (0);
}
