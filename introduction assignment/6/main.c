#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Enter temperature
    float celcious, farenheight;

    printf("\nEnter temperature in degrees: ");
    scanf("%.2f",&celcious);

    farenheight=celcious*((9/5)+32);
    printf("\n\tTemperature is %.2f degrees farenheight\n",&farenheight);

    return 0;
}
