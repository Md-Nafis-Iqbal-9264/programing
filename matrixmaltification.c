#include <stdio.h>

int main()
{
    int first[10] [10], second [10][10], result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for first matrix : ");
    scanf("%i %i",&r1,&c1);

    printf("Enter rows and column for second matrix : ");
    scanf("%i %i",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!! column of first matrix not equal to row of second\n");

        printf("Enter rows and column for first matrix: ");
        scanf("%i %i",&r1,&c1);

        printf("Enter rows and column for second matrix : ");
        scanf("%i %i",&r2,&c2);
    }

    printf("\nEnter elements for first matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first [%i][%i]=",i,j);
            scanf("%i",&first[i][j]);
        }
    }

    printf("\nEnter elements for second matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second [%i][%i]=",i,j);
            scanf("%i",&second[i][j]);
        }
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum = sum + first[i][k] * second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }

    printf("\n\nFirst Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%i ",first[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSecond Matrix\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%i ",second[i][j]);
        }
        printf("\n");
    }

    printf("\n\nResult Matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%i ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
