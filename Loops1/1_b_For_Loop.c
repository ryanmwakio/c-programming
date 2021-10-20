#include <stdio.h>

void main()
{
    printf("\n\t\tNumber\tSquare\tCube");

    for (int num = 2; num <= 10; num++)
    {
        printf("\n\t\t%d\t%d\t%d", num, num * num, num * num * num);
    }

    printf("\n\n");
}
