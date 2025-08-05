/*
1,-2,3,-4,5,-6.......
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i % 2 == 1)
        {
            printf("%10d",i);
        }
        else{

            i = 0 - i;
            printf("%10d",i);
            i = 0 - i;
        }
    }
    return 0;
}