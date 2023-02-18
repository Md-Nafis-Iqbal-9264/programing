#include <stdio.h>

int main()
{
    int i,sum=0,n;

    printf ("Enter the last number of the series :");
    scanf ("%i",&n);

    for (i=1; i<=n; i++)
    {
        sum = sum + i ;
        if(i==n)
            printf ("%i",i);
        else
            printf ("%i +",i);
    }

    printf ("= %i",sum);
}
