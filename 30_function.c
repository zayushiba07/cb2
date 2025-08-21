#include<stdio.h>

void printtable(int start,int end)
{
    if(start<end)
    {
        printf("..........ascending order..........\n");
        while(start<=end)
        {
            for(int i=1;i<=10;i++)
            {
                int ans = start * i;
                printf("%d X %d = %d\n",start,i,ans);
            }
            start++;
        }
    }
    else
    {
        printf("..........descending order..........\n");
        while(start>=end)
        {
            for(int i=1;i<=10;i++)
            {
                int ans = start * i;
                printf("%d X %d = %d\n",start,i,ans);
            }
            start--;
        }
    }
}

int main()
{
    int start,end;
    printf("Enter start :");
    scanf("%d",&start);
    printf("Enter end :");
    scanf("%d",&end);
    printtable(start,end);
    printtable(10,5);
    printtable(5,12);
    printtable(10,13);
    return 0;
}