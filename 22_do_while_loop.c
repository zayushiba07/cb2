#include<stdio.h>

int main()
{
    int base,exponet,result=1,i=1;
    printf("Enter base :");
    scanf("%d",&base);
    printf("Enter exponets :");
    scanf("%d",&exponet);
    do
    {
        result *= base;
        i++;
    } while (i<=exponet);
    printf("answer is :%d",result);
    return 0; 
}