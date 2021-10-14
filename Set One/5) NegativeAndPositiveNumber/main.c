#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\nPlease enter a number to check: ");
    scanf("%d",&number);

    if(number<0){
        printf("\nYour number %d, is a negative number.\n",number);
    }else if(number==0 || number>0){
        printf("\nYour number %d, is a positive number.\n",number);
    }else{
        printf("Invalid number input");
    }
    return 0;
}
