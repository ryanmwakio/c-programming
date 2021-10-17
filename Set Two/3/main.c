#include<stdio.h>
#include<conio.h>

void main( )
{
    int earning;
    char gender = "m";
    int genderTwo;

    // Input
    printf("\nEnter Gender(m/f): ");
    scanf("%c", &gender);
    printf("\nEnter your salary: ");
    scanf("%d", &earning);

    // due tolimits of c 🤦🏾‍♂️
    if (gender = "f")
        genderTwo = 0;
    else
        genderTwo = 1;

    // Computation
    if ((genderTwo==0) && (earning<15000))
        printf("\n\tYour tax rate is 12 percent.\n");
    else if ((genderTwo==0) && (earning>=15000))
        printf("\n\tYour tax rate is 14 percent.\n");
    else if (!(genderTwo==0) && (earning<14000))
        printf("\n\tYour tax rate is 13 percent.\n");
    else if (!(genderTwo==0) && (earning>=14000))
        printf("\n\tYour tax rate is 15 percent.\n");
    else
        printf("\nWrong Data\n");

}
