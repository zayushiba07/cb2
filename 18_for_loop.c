#include<stdio.h>

int main()
{
    int table,num,multi;
    printf("Enter number for table :");
    scanf("%d",&num);
    for(multi=1;multi<=10;multi++)
    {
        table = multi*num;
        printf("%3d X %3d = %3d\n",num,multi,table);
    }
    return 0;
}