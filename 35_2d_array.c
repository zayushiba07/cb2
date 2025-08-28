#include<stdio.h>

int main()
{
    char name[5][30],i;

    for(i=0;i<5;i++)
    {
        printf("Enter name [%d]:",i+1);
        scanf("%s",&name[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}