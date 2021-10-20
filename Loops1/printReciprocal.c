#include <stdio.h>
#include <math.h>

int main()
{
int number;
double reciprocal;

printf("Please enter your number: ");
scanf("%d",&number);

while (number==0)
{
    printf("\nZero is not a valid number enter your number: ");
    scanf("%d",&number);
}

reciprocal=number;
printf("%.2f",reciprocal);

while (number!=0)
{
    /* code */
}


return 0;
}
