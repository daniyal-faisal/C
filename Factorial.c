#include <stdio.h>
#include <stdlib.h>
/*Situation4:
You are tasked with creating a program that calculates
the factorial of a non-negative integer. The factorial
of a number is the product of all positive integers less
than or equal to that number. For example, the factorial
of 5 is 5 x 4 x 3 x 2 x 1 = 120.*/

int main()
{
    int num;
    int index = 1;
    int answer = 1;
    printf("Enter a Number:");
    scanf("%d", &num);
    while (index <= num)
        {
            answer *= index;
            index++;
        }

    printf("Factorial of %d is %d.",num,answer);

    return 0;
}
