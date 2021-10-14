#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Enter length in cm
    int centimeters, meters;

    printf("\nEnter length in centimeters: ");
    scanf("%d",&centimeters);

    //Calculate length
    meters=centimeters*0.01;

    printf("\n\tLength is %d meters \n",meters);

    return 0;
}
