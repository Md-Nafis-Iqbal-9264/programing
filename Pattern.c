#include <stdio.h>

int main()
{

    int n,row,col;

    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {
            printf ("%i ",col);
        }
        printf ("\n");

    }
    serial();

    return 0;
}

void serial(int n,int row,int col)
{

    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=n; row>=1; row--)
    {

        for(col=1; col<=row; col++)
        {
            printf ("%i ",row);
        }
        printf ("\n");

    }

    bainary_col();

    return 0;
}

void bainary_col(int n,int row,int col)
{


    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {
            printf ("%i ",col%2);
        }
        printf ("\n");

    }
    for(row=n-1; row>=1; row--)
    {

        for(col=1; col<=row; col++)
        {
            printf ("%i ",col%2);
        }
        printf ("\n");

    }

    bainary_row();

    return 0;
}

void bainary_row(int n,int row,int col)
{
    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
        {
            printf ("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf ("%i ",row%2);
        }
        printf ("\n");

    }
    for(row=n-1; row>=1; row--)
    {

        for(col=1; col<=n-row; col++)
        {
            printf ("  ");
        }

        for(col=1; col<=row; col++)
        {
            printf ("%i ",col%2);
        }
        printf ("\n");

    }
    last();

    return 0;
}
void last(int n,int row,int col)
{


    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n-row; col++)
        {
            printf ("  ");
        }

        for(col=1; col<=row; col++)
        {
            printf ("%i ",col);
        }
        printf ("\n");

    }
    squer();

    return 0;
}
void squer(int n,int row,int col)
{


    printf ("Enter N :");
    scanf ("%i",&n);

    for(row=1; row<=n; row++)
    {

        for(col=1; col<=n; col++)
        {
            printf ("%i ",row);
        }
        printf ("\n");

    }

    return 0;
}
