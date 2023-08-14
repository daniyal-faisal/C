#include <stdio.h>
#include <stdlib.h>

int main()
{   double temp;
    double ftemp;
    printf("Temp F -> C \n");
    printf("Enter temperature in Fahrenheit:\n");
    scanf("%lf", &temp);
    ftemp = (temp-32) * 5 / 9;
    printf("Temperature in Celsius is %f ", ftemp);


    return 0;
}
