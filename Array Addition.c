#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Sum = 0 ,index = 0, Numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arraysize = sizeof(Numbers) / sizeof(Numbers[0]);
    printf("ArraySize:%d\n",arraysize);

    while(index < arraysize)
        {
            Sum = Sum + Numbers[index];
            index++;
        }

    printf("Sum:%d",Sum);
    return 0;
}
