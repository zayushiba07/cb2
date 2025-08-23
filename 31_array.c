#include<stdio.h>

int main()
{
    int choices,i;
    printf("Enter the array of number:");
    scanf("%d",&choices);

    int marks[choices];

    for(i=1;i<=choices;i++)
    {
        printf("Enter marks of subject [%d]:",i);
        scanf("%d",&marks[i]);
    }

    printf("==========================================\n");

     for(i=1;i<=choices;i++)
    {
        printf("marks of subject [%d]:%d\n",i,marks[i]);
    }
    return 0;
}