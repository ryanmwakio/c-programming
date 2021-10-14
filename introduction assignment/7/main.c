#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distanceTravelled, timeTaken;

    // Receiving inputs
    printf("\nEnter the distance Travelled in meters: ");
    scanf("%d",&distanceTravelled);

    printf("\nEnter the time taken in minutes: ");
    scanf("%d",&timeTaken);

    // Conversion
    float speed=(distanceTravelled/1000)*(timeTaken/60);

    // Output
    printf("\n\tYour speed is %.2f kilometers per hour\n",speed);

    return 0;
}
