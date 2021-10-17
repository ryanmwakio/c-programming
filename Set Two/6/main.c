#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, remainder2, remainder9;

    // Input
    printf("\nInput an number: ");
    scanf("%d", &number);

    // Remainder

    remainder9=number%9;

    // computation
    switch(remainder9){
        case 0:
            remainder2=number%2;

            if (remainder2 == 0)
                printf("\n\tNumber is evenly divisible by 9\n");
            else
                printf("\n\tNumber is divisible by 9 but is an odd number\n");
            break;
        default:
            printf("\n\tNumber is not divisible by 9\n");
    }
    return 0;
}
