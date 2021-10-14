#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Input
    int celcious;

    printf("\nEnter temperature in degrees celcious: ");
    scanf("%d",&celcious);

    // Conversion

    float farenheight=celcious*1.8+32;

    // Output
    printf("\n\tTemperature is %.0f degrees farenheight\n",farenheight);

    return 0;
}
