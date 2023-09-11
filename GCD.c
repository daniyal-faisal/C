#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, NUM1[100], NUM2[100], NUM3[100], i = 1, j = 1, k = 0, l = 1, m = 1, o = 0,ll = 0;

    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);

    for (; i <= num1; i++)
    {
        if (num1 % i == 0)
        {
            NUM1[j] = i;
            j++;
        }
    }

    for (; l <= num2; l++)
    {
        if (num2 % l == 0)
        {
            NUM2[m] = l;
            m++;
        }
    }


    for (i = 1; i < j; i++)
    {
        for (l = 1; l < m; l++)
        {
            if (NUM1[i] == NUM2[l])
            {
                NUM3[o] = NUM1[i];
                o++;
            }
        }
    }

    printf("Factors of %d are: ", num1);
    for (i = 1; i < j; i++)
    {
        printf("%d ", NUM1[i]);
    }

    printf("\nFactors of %d are: ", num2);
    for (l = 1; l < m; l++)
    {
        printf("%d ", NUM2[l]);
    }

    printf("\nCommon factors of %d and %d are: ", num1, num2);
    for ( ;ll < o; ll++)
    {
        printf("%d ", NUM3[ll]);
    }

    printf("\nTHE GCD IS %d",NUM3[ll - 1]);
    return 0;
}
