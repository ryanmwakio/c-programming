#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Enter length in cm
    int centimeters, meters;

    printf("\nEnter length: ");
    scanf("%d",&centimeters);

    //Calculate length
    meters=(centimeters/100);

    printf("\n\tLength is %d \n",&meters);

    return 0;
}
