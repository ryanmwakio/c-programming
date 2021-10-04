#include<stdio.h>
void main( )
{
	char grade;

	printf("Enter the grade the student got: ");
	scanf("%c",&grade);

	switch(grade)
	{
	case 'A': printf("\nThe student has a Distinction.");
		  break;
	case 'B': printf("\nThe student has a Credit.");
		  break;
	case 'C':
	case 'D': printf("\nThe student has a Pass.");
		  break;
	default:   printf("\nThe student got a fail.");
	}
	printf("\n\n");
}
