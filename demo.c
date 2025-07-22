
#include<stdio.h>

int main()
{
    int e_no,salary;
    char e_name;
    printf("Enter empolyee no :");
    scanf("%d",&e_no);
    printf("Enter employee Salary :");
    scanf("%d",&salary);
    printf("Enter first letter of employee name :");
    scanf(" %c",&e_name);
    printf("employee no is :%d\n",e_no);
    printf("employee salary is :%d\n",salary);
    printf("employee first letter is :%c\n",e_name);
    return 0;
}