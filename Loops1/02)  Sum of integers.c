#include <stdio.h>

void main()
{
    int num, sum;

    printf("\nProgram Will terminate when X is entered\nEnter a number:\n");

    for(num = 1; num != "x"; sum += num)
    {
        printf("\t");
        scanf("%d", &num);

        if(num == "0"){
            continue;
        }
    }

    printf("The sum is %d", sum);
}
