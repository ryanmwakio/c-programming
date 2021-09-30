#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int pi=3.142;

    //Get radius
    int radius;
    printf("\n\tEnter the radius of the circle: ");
    scanf("%d",&radius);

    //Calculate the area pi*r^2
    float area=pi*radius*radius;

    //Calculate circumference
    float circumference=pi*(radius*2);

    printf("\n\tArea: %.2f | Circumference: %.2f\n",area,circumference);

    return 0;
}
