#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Get the numbers
    int Number1, Number2, Number3;
    printf("Enter the first number: ");\
    scanf("%d",&Number1);

    printf("\nEnter the second number: ");\
    scanf("%d",&Number2);

    printf("\nEnter the third number: ");\
    scanf("%d",&Number3);

    //Compute the sum
    int sum=Number1+Number2+Number3;

    //Compute the product
    int product=Number1*Number2*Number3;

    //Compute average
    float average=sum/3;

    printf("\n\t Sum: %d \n\t Product: %d \n\t Average: %.2f\n",sum,product,average);

    return 0;
}
