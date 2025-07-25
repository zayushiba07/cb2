
#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter the num1 :");
    scanf("%d",&num1);
    printf("Enter the num2 :");
    scanf("%d",&num2);
    printf("bitwise And :%d\n",num1&num2);
    printf("bitwise or :%d\n",num1|num2);
    printf("bitwise xor :%d\n",num1^num2);
    printf("bitwise Not :%d\n",~num1);
    printf("bitwise left shift :%d\n",num1<<1);
    printf("bitwise right shift :%d\n",num1>>1);
    return 0;
}