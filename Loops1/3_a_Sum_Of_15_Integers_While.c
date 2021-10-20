# include <stdio.h>

void main()
{
    int num = 1, square;

    printf("\n\tNumber\tSquare\n");

    while(num <= 15)
    {
        square = num * num;
        printf("\n\t%d\t%d\n", num, square);
        num++;
    }
}
