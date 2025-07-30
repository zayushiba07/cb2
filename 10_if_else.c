#include<stdio.h>

int main()
{
    int months;
    printf("Enter months of number :");
    scanf("%d",&months);
    if(months == 2)
    {
        printf("%d have 28/29 days \n",months);
        return;
    }
    if(months == 1||months == 3||months == 5||months == 7||months == 8|| months == 10|| months==12)
    {
        printf("%d have 31 days \n",months);
    }
    else
    {
        printf("%d have 30 days \n",months);
    }
    return 0;
}