#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Display the table
    printf("\n\tGross Pay\t\t\tTax Rate\n");
    printf("\tover 40,000\t\t\t30%%\n");
    printf("\t>=30,000 but below 40,000\t25%%\n");
    printf("\t>=20,000 but below 30,000\t15%%\n");
    printf("\t>=10,000 but below 20,000\t10%%\n");
    printf("\tBelow 10,000\t\t\tno tax\n\n");
    */

    //Accept the input, the gross pay
    int grossPay;
    printf("\tPlease enter your gross pay e.g 40000: ");
    scanf("%d",&grossPay);

    //Pass the gross pay through logic to determine how much tax to apply
    float tax;
    float netPay;

    if(grossPay>40000){
        tax=grossPay*0.3;
        netPay=grossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(grossPay>=30000&&grossPay<40000){
        tax=grossPay*0.25;
        netPay=grossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(grossPay>=20000&&grossPay<30000){
        tax=grossPay*0.15;
        netPay=grossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(grossPay>=10000&&grossPay<20000){
        tax=grossPay*0.1;
        netPay=grossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(grossPay<10000){
        tax=0;
        netPay=grossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else{
        printf("\n\tInvalid input\n");
    }

    return 0;
}
