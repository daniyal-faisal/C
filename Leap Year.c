#include <stdio.h>
#include <stdlib.h>

/*Situation
You are tasked with creating a program that determines
whether a given year is a leap year or not. A leap year is
a year that is exactly divisible by 4, except for years that
are exactly divisible by 100. However, years that are divisible
by 400 are also considered leap years.
*/

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if(year%4 == 0 && year%100 != 0)
        {
            printf("%d is a Leap Year.",year);
        }
    else
        {
            printf("%d is not a leap year",year);
        }
    return 0;
}
