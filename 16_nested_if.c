#include<stdio.h>

int main()
{
    int sale_price,cost_price;
    printf("Enter sale price :");
    scanf("%d",&sale_price);
    printf("Enter cost price :");
    scanf("%d",&cost_price);
    int diff = sale_price - cost_price;
    if(diff != 0)
    {
         if(diff<0)
    {
        printf("%d loss\n",diff);
    }
    else
    {
        printf("%d profit\n",diff);
    }
    return 0;
    }
    else
    {
        printf("no loss no profit");
    }
}