#include<stdio.h>

int main()
{    //  50   40
    int num1,num2;
    printf("Enter num 1:");
    scanf("%d",&num1);
    printf("Enter num 2 :");
    scanf("%d",&num2);
    printf("Equal To :%d\n",num1==num2);//00
    printf("Not Equal To :%d\n",num1!=num2);//11
    printf("greater then :%d\n",num1>num2);//01
    printf("less then :%d\n",num1<num2);//10
    printf("less then  or equal:%d\n",num1<=num2);//10
    printf("greter then or equal :%d\n",num1>=num2);//01
    return 0;
}