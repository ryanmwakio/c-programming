#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Display the table
    printf("\n\tGross Pay\t\t\tTax Rate\n");
    printf("\tover 40,000\t\t\t30%%\n");
    printf("\t>=30,000 but below 40,000\t25%%\n");
    printf("\t>=20,000 but below 30,000\t15%%\n");
    printf("\t>=10,000 but below 20,000\t10%%\n");
    printf("\tBelow 10,000\t\t\tno tax\n\n");

    //Accept the input, the gross pay
    int GrossPay;
    printf("\tPlease enter your gross pay e.g 40000: ");
    scanf("%d",&GrossPay);

    //Pass the gross pay through logic to determine how much tax to apply
    float tax;
    float netPay;

    if(GrossPay>40000){
        tax=GrossPay*0.3;
        netPay=GrossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(GrossPay>=30000&&GrossPay<40000){
        tax=GrossPay*0.25;
        netPay=GrossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(GrossPay>=20000&&GrossPay<30000){
        tax=GrossPay*0.15;
        netPay=GrossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(GrossPay>=10000&&GrossPay<20000){
        tax=GrossPay*0.1;
        netPay=GrossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else if(GrossPay<10000){
        tax=0;
        netPay=GrossPay-tax;
        printf("\n\tYour net pay is %.2f\n",netPay);
    }else{
        printf("\n\tInvalid input\n");
    }

    return 0;
}
