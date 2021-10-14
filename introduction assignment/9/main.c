#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grams;

    // Input
    printf("\nEnter weight in grams: ");
    scanf("%d", &grams);

    // Conversion
    float kilograms=grams/1000;
    float packages=grams/10;

    // Output
    printf("\n\tThe weight of the package is %.2f kilograms.\n", kilograms);
    printf("\n\tIt takes %.f such packages to form one kilogram.\n", packages);

    return 0;

}
