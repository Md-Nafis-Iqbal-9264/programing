#include <stdio.h>

int main() {

    int num,temp,rem,sum=0;

    printf("Enter any number :");
    scanf("%i",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum*10 + rem;
        temp = temp / 10;
    }


    printf("sum of digits : %i\n",sum);

    if(num==sum)
        printf("It's a Palindrome number");
    else
        printf("It's a not Palindrome number");

    return 0;
}
