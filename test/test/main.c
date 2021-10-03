#include <stdio.h>
#include <stdlib.h>

int main()
{
    char hello[] = "hello world";
    int dayWorking = 1;
    printf("first c programme %s %d \n\n", hello, dayWorking);

    char name;

    printf("input name here: ");
    scanf("\n%s",&name);

    printf("Your name is %s",name);

    return 0;
}
