#include<stdio.h>

int main()
{
    int odd=99;
    while (odd>=1)
    {
        printf("%4d",odd);
        odd-=2;
    }
    return 0;
}