#include<stdio.h>

int main()
{
    int days;
    printf("Enter days :");
    scanf("%d",&days);

    switch (days)
    {
       case 1:
           printf("it is sunday");
           break;
        case 2:
            printf("it is monday");
            break;
        case 3:
            printf("it is tuesday");
            break;
        case 4:
            printf("it is wensday");
            break;
        case 5:
            printf("it is thursday");
            break;
        case 6:
            printf("it is friday");
            break;
        case 7:
            printf("it is saturday");
            break;
        default:
            printf("Invalid number");
             break;
    }
}