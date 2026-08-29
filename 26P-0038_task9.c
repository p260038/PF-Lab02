#include<stdio.h>
int main()
{   
double basic_salary = 85000.00;
double HRA=0.20*basic_salary;
double MA=0.10*basic_salary;
double gross_ salary=basic_salary + HRA+MA;
double tax_deduction=0.05*gross_salary;
double net_salary=gross_salary-tax_deduction;
printf("============MONTHLY SALARY SLIP============\n");
printf("Basic salary:\t\t\tPKR %.2f\n",basic_salary);
printf("House Rent Allowance (20%%):\tPKR %.2f\n",HRA);
printf("Medical Allowance (10%%):\tPKR %2f\n",MA);
printf("---------------------------------------------\n");
printf("Gross Salary:\t\t\tPKR %.2f\n",gross_salary);
printf("Tax Reduction (5%%):\t\tPKR %.2f\n",tax_deduction);
printf("---------------------------------------------\n");
printf("Net Payable Salary:\t\tPKR %.2f\n",net_salary);
printf("=============================================\n");
return 0;


}
