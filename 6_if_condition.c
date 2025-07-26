#include<stdio.h>

int main()
{
    int num1,cube;
    printf("Enter cube number :");
    scanf("%d",&num1);
    if(num1<0)
    {
        printf("nagative number is :%d\n",num1);
        num1 = 0 - num1;
        printf("nagative number is convert into postive number :%d\n",num1);
    }
    cube = num1*num1*num1;
    printf("Cube is : %d\n",cube);
    return 0;
}