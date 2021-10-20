# include <stdio.h>

void main()
{
    int num, square, sum;

    printf("\n\tNumber\tSquare");

    for(num = 1; num <= 15; num++)
    {
        square = num * num;
        sum = square += square
        printf("\n\t%d\t%d", num, square);
    }
}
