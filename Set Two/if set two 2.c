#include<stdio.h>
#include<math.h>
int main ()
{
	
	float  tax_rate, gross_salary, net_salary, tax_amount;
	
	printf("Enter the gross_salary: ");
	scanf("%f",&gross_salary);
	
	if (gross_salary>=20000){
		
		tax_amount = gross_salary * 15 % ;
		
		printf ("\nThe tax_amount is %f\n\n",tax_amount );
	}else if (gross_salary>=10000 && gross_salary<=20000){
		
		printf ("\nThe tax_amount is %f\n\n",tax_amount,gross_salary * 10 % );
	}else if (gross_salary<10000){
		
		printf ("\nNot taxed\n\n");
	}
}