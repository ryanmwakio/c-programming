#include <stdio.h>
#include <math.h>

int main()
{

double sum=0;

int i=0;
while (i<=15)
{
    double square=pow(i,2);
    sum+=square;
    i++;
}


    printf("\n The sum is: %.2f\n\n",sum);

    return 0;
}
