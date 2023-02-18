#include <stdio.h>
#include <math.h>


int main()
{


    int n;

    printf("How many numbers do you want to check? Please enter:");
    scanf("%i",&n);

#define LENGTH n


    int num[LENGTH],check,s=1;
    float result;


    for (int i=0; i<LENGTH; i++,s++)
    {
        printf("num%i=",s);
        scanf("%i",&num[i]);
    }
    printf("\n");
    for(int i=0; i<LENGTH; i++)
    {
        result=sqrt(num[i]);
        check=result;

        if ((result-check)>0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
