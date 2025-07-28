#include<stdio.h>

int main()
{
    int time;
    printf("Enter time in 24 hours formate :");
    scanf("%d",&time);
    if(time>12)//<,>,==,<=,>=,!=
    {
        time = time - 12;
        printf("%d pm ",time);
    }
    else
    {
        printf("%d am ",time);
    }
    return 0;
}