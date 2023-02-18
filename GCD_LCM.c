// It's a GCD and LCM dictactor
#include <stdio.h>

int main()
{

    int num1,num2,n1,n2,rem,gcd,lcm;

    printf("Enter 2 number :");
    scanf("%i %i",&num1,&num2);

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }

    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("GCD is = %i\n",gcd);
    printf("LCM is = %i\n",lcm);

    return 0;
}
