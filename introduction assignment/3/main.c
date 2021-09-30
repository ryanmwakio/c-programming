#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    int width;
    printf("\n\tEnter the length of the rectangle: ");
    scanf("%d",&length);

    printf("\n\tEnter the width of the rectangle: ");
    scanf("%d",&width);

    //Computation
    int area=length*width;
    int perimeter=(length*2)+(width*2);

    printf("\n\tArea: %d | Perimeter: %d\n",area,perimeter);
    return 0;
}
