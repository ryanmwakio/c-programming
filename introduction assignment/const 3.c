#include <stdio.h>
#include <stdlib.h>

int main()
{
    const float pi=22/7.0;

    // Get radius
    int radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%d",&radius);

    // Calculate the area pi*r^2
    float area=pi*radius*radius;

    // Calculate circumference
    float circumference=pi*(radius*2);

    // Output
    printf("\n\tArea: %.f \n\tCircumference: %.f\n",area,circumference);

    return 0;
}
