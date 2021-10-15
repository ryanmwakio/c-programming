#include<stdio.h>
#include<math.h>

int main ()
{

	float grossSalary, netSalary, taxAmount;

	printf("Enter the gross_salary: ");
	scanf("%f",&grossSalary);

	if(grossSalary>20000){
        taxAmount = grossSalary * 15/100 ;
        printf("\nThe taxAmount is %f\n",taxAmount);
	}else if(grossSalary>=10000 && grossSalary<=20000){
		printf ("\nThe taxAmount is %f\n\n",taxAmount,grossSalary * 10 % );
	}else if(grossSalary<10000){
        printf("\nNot taxed\n\n");
	}

    return 0;
}
