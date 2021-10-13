#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Get the base and height of the triangle
    int base;
    int height;

    printf("\nEnter the base of the triangle: ");
    scanf("%d",&base);

    printf("\nEnter the height of the triangle: ");
    scanf("%d",&height);

    float area=0.5*base*height;

    printf("\n\tArea: %.2f\n",area);



    return 0;
}
