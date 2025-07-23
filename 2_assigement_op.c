#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    printf("Enter the num2 :");
    scanf("%d",&num2);
    num1+=num2;//num1 = num1+num2;
    printf("addition is :%d\n",num1);
    num1-=num2;//num1 = num1-num2;
    printf("subtraction is :%d\n",num1);
    num1*=num2;//num1 = num1*num2;
    printf("multipliaction is :%d\n",num1);
    num1/=num2;//num1 = num1/num2;
    printf("division is :%d\n",num1);
    num1%=num2;//num1 = num1%num2;
    printf("modulo is :%d\n",num1);
    return 0;
}