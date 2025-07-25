
#include<stdio.h>

int main()
{
    int num1,num2,num3,num4;
    printf("Enter num1 :");//40
    scanf("%d",&num1);
    printf("Enter num2 :");//40
    scanf("%d",&num2);
    printf("Enter num3 :");//30
    scanf("%d",&num3);
    printf("Enter num4:");//30
    scanf("%d",&num4);

    printf("And :%d\n",num1==num2 && num3==num4);//1
    printf("Or :%d\n",num1==num2 || num3==num4);//1
    printf("not :%d\n",!(num1==num2 || num3==num4));//0
    return 0;
}