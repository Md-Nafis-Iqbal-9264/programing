// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int num;
    printf("Enter a Integer :");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Congratulation\n");
        printf("Yes,it's a Even Number\n");
    }
    else
        printf("you not give a Even Number\n");
    if(num%2!=0)
        printf("It's a Odd Number\n");


    float mark;

    printf("Enter your number :");
    scanf("%f",&mark);

    if (mark>=80)
        printf("A+");

    else if (mark>=70)
        printf("A");

    else if (mark>=60)
        printf("A-");

    else if (mark>=50)
        printf("B");

    else if (mark>=40)
        printf("C");

    else if (mark>=33)
        printf("D");

    else
        printf("Fail");

    return 0;

}
