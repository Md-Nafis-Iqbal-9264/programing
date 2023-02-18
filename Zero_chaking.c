#include <stdio.h>
#include <math.h>

int main()
{
    // Write C code here

    int n,r,count=0;
    printf("Enter a number :");
    scanf("%i",&n);

    while(n!=0)
    {
        n=n/10;
        r=n%10;
        if(r==0)
            ++count;
    }

    printf("In last they have zeros : %i",count);

    return 0;
}
