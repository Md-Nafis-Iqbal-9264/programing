#include <stdio.h>

int main() {
    float num1,num2;
    char opa;

    printf("Enter a Operator(+,-,*,/):");
    scanf("%c",&opa);

    printf("Enter two number :");
    scanf("%f %f",&num1,&num2);

    switch(opa)
    {
        case '+' :
        {
            printf(" %.2f + %.2f = %.2f\n ",num1,num2,num1+num2);
            break;
        }

        case '-' :
        {
            printf(" %.2f - %.2f = %.2f\n ",num1,num2,num1-num2);
            break;
        }

        case '*' :
        {
            printf(" %.2f * %2.f = %.2f\n ",num1,num2,num1*num2);
            break;
        }

        case '/' :
        {
            printf(" %.2f / %.2f = %.2f\n ",num1,num2,num1/num2);
            break;
        }
        default:
            printf("Not a valid operator\n");

    }


    return 0;
}
