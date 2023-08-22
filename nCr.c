#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    int index = 1;
    int answer = 1;

    while (index <= num)
        {
            answer *= index;
            index++;
        }
    return answer;
}

int main()
{
    int n,r;
    printf("Enter a value for n:");
    scanf("%d", &n);
    printf("Enter a value for r:");
    scanf("%d", &r);

    if(r > n || r < 0 || n <= 0)
    {
        printf("ERROR");
    }
    else
    {
        printf("nCr is %d",factorial(n)/(factorial(n-r)*factorial(r)));
    }

    return 0;
}
