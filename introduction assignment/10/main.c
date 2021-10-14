#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    // Input
    printf("\nEnter your age: ");
    scanf("%d",&age);

    // Check age
    if(age<18)
    printf("\n\tYou are too young to vote");

    else
    printf("\n\tYou can vote\n");

    return 0;
}
