#include <stdio.h>

void main()
{
    int i = 2;
    printf("\n\t\tNumber\tSquare\tCube");

    do{
        printf("\n\t\t%d\t%d\t%d", i, i * i, i * i * i);
        i++;
    }while(i <= 10);

    printf("\n\n");
}
