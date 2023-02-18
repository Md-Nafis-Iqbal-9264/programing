// It's a Multiplication
#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter Multiplication Number:");
    scanf("%i",&num);
    for(i=1; i<=10; i++)
    {
        printf("%i x %i = %i\n",num,i,num*i);
    }


    return 0;
}
