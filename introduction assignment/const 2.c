#include <stdio.h>
#include <math.h>
#define pi 3.142

void main()
{
    // Get radius
    int radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&radius);

    // Calculate the area pi*r^2
    float area=pi*pow(radius, 2);

    // Calculate circumference
    float circumference=pi*(radius*2);

    // Output
    printf("\n\tArea: %.1f \n\tCircumference: %.1f\n",round(area),round(circumference));

}

