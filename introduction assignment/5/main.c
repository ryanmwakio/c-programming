#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input
    int centimeters, meters;

    printf("\nEnter length in centimeters: ");
    scanf("%d",&centimeters);

    // Conversion
    meters=centimeters*0.01;

    // Output
    printf("\n\tLength is %d meters \n",meters);

    return 0;
}
