#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Get the numbers
    int Number1, Number2, Number3;
    printf("\tEnter the first number: ");\
    scanf("%d",&Number1);

    printf("\n\tEnter the second number: ");\
    scanf("%d",&Number2);

    printf("\n\tEnter the third number: ");\
    scanf("%d",&Number3);

    //Compute the sum
    int sum=Number1+Number2+Number3;

    //Compute the product
    int product=Number1*Number2*Number3;

    //Compute average
    float average=sum/3;

    printf("\n Sum: %d | Product: %d | Average: %.2f\n",sum,product,average);
    return 0;
}
