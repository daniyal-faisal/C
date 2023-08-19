#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 1, Sum = 0, index = 1, last;
    printf("Enter last number:");
    scanf("%d", &last);
    while(index < last+1);
    {
        Sum = Sum + index;
        index ++;
    }


    printf(Sum);
    return 0;
}
