#include<stdio.h>

int main()
{
    int days;
    printf("Enter days :");
    scanf("%d",&days);
    if(days==1)
    {
        printf("%d this is sundays",days);
    }
    else if (days == 2)
    {
        printf("%d this is monday",days);
    }
    else if (days == 3)
    {
        printf("%d this is tuesday",days);
    }
    else if (days == 4)
    {
        printf("%d this is wensday",days);
    }
    else if (days == 5)
    {
        printf("%d this is thursday",days);
    }
    else if (days == 6)
    {
        printf("%d this is friday",days);
    }
    else if (days == 7)
    {
        printf("%d this is saturday",days);
    }
    else
    {
        printf("please enter proper number");
    }
    return 0;
}