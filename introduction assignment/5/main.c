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
    printf("\n\t%d cm = %d meters \n", centimeters, meters);

    return 0;
}
