#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2;
    char opp;
    printf("Enter first number:");
    scanf("%d", &num1);

    printf("Enter operator:");
    scanf(" %c", &opp);

    printf("Enter second number:");
    scanf("%d", &num2);

    if(opp == '+')
        {
            printf("Result: %d\n", num1 + num2);
        }
    else if(opp == '-')
        {
            printf("Result: %d\n", num1 - num2);
        }

    else if(opp == '*')
        {
            printf("Result: %d\n", num1 * num2);
        }
    else if(opp == '/')
        {
            printf("Result: %d\n", num1 / num2);
        }

    else
        {
            printf("Wrong Operator");
        }

    return 0;
 }
