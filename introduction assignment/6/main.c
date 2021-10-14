#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Enter temperature
    int celcious;

    printf("\nEnter temperature in degrees celcious: ");
    scanf("%d",&celcious);

    float farenheight=celcious*1.8+32;
    printf("\n\tTemperature is %.0f degrees farenheight\n",farenheight);

    return 0;
}
