#include <stdio.h>

int main()
{
    int a[100],i,n;

    printf("How many number :");
    scanf("%i",&n);

    for (i=0; i<n; i++)
    {
        scanf("%i",&a[i]);
    }

    int max = a[0];

    for (i=1; i<n; i++)
    {
        if(max < a[i])
            max = a[i];
    }
    printf("The maximum number is :%i\n",max);

    int min = a[0];

    for (i=1; i<n; i++)
    {
        if(min > a[i])
            min = a[i];
    }
    printf("The minimum number is :%i",min);

    return 0;
}
