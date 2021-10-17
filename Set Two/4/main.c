#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y, a, b, c;

    printf("Enter value of X: ");
    scanf("%d", &x);

    if (x > 5){

    // for y=4x^3+2x-6

        a = 4*x*x*x;
        b = 2*x;
        c = -6;
        y = a + b + c;
    }else if (x < 5){

    // for y=3x^2-4y+12

        a = (3*x*x)/5;
        b = 12/5;
        y = a + b;
    }else if (x == 5){

    // for y=6x-5

        a = 6*5;
        c = -5;
        y = a + b;
    }
    printf("\n\tThe value of y is %.1f\n", y);

    return 0;
}
