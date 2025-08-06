/*
5! = 5x4x3x2x1 = 120

*/

#include<stdio.h>

int main()
{
    int fact=1,number;
    printf("Enter number for factorial :");
    scanf("%d",&number);
    while (number>1)
    {
        fact *=number;
        number--;   
    }
    printf("%d",fact);
    return 0;
    
}