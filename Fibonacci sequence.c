#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index = 1, prev = 0, next = 1, terms, temp;

    printf("Enter number of Terms ");
    scanf("%d", &terms);

    printf("%d\n", prev);

    while(index < terms)
        {
            printf("%d\n", next);
            temp = next;
            next = prev + next;
            prev = temp;
            index ++;
        }

    return 0;
}
