/*
    0 - 4,00,000  tax=0%
    4,00,000 - 8,00,000 tax=10%
    8,00,000 - 12,00,000 tax=12%
    12,00,000 - 14,00,000 tax=14%
    14,00,000 - 18,00,000 tax=16%
    18,00,000  - infinty  tax=18%
*/
#include<stdio.h>

int main()
{
    int month_income,gross_income;
    float tax,net_salary;

    printf("Enter Employee Monthly Salary :");
    scanf("%d",&month_income);

    gross_income = month_income * 12;
    printf("Gross Salary : %d\n",gross_income);

    if(gross_income<=400000)
    {
        tax = 0;
        printf("Tax is : %f\n",tax);
        printf("Salary is :%d\n",gross_income);
    }
    else if(gross_income<=800000)
    {
        tax = gross_income * 0.10;
        printf("Tax is : %f\n",tax);
    }
    else if(gross_income<=1200000)
    {
        tax = gross_income * 0.12;
         printf("Tax is : %f\n",tax);
         
    }
    else if(gross_income<=1400000)
    {
        tax = gross_income * 0.14;
        printf("Tax is : %f\n",tax);
    }
    else if(gross_income<=1800000)
    {
        tax = gross_income * 0.16;
        printf("Tax is : %f\n",tax);
    }
    else
    {
        tax = gross_income * 0.18;
        printf("Tax is : %f\n",tax);
    }
    net_salary = gross_income - tax;
    printf("Net Salary is :%f\n",net_salary);
    return 0;
}
