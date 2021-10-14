#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;

    // Input
    printf("\nEnter number: ");
    scanf("%d",&number);

    // Computation
    int square=number*number;
    int cube=number*number*number;
    double squareRoot = sqrt(number);
    double cuberoot= cbrt(number);

    // Output
    printf("\n\tSquare = %d",square);
    printf("\n\tCube = %d",cube);
    printf("\n\tSquareroot = %.2f",squareRoot);
    printf("\n\tCuberoot = %.2f\n",cuberoot);

    return 0;
}
