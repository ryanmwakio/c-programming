#include <stdio.h>
#include <math.h>

void main()
{
    printf("\n\t\tNumber\tSquare\tCube");

    for(int i = 2; i <= 10; i++)
    {
        int Square = pow(i, 2);
        int cube = pow(i ,3);
        printf("\n\t\t%d\t%d\t%d", i, Square, cube);
    }

    printf("\n\n")
}
