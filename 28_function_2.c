#include<stdio.h>

void oddeven(int no)
{
    if(no%2==0)
    {
        printf("This is even number\n");
    }
    else
    {
        printf("This is odd number\n");
    }
}
int main()
{
    int no;
    printf("Enter number :");
    scanf("%d",&no);
    oddeven(no);  
    oddeven(15); 
    oddeven(150); 
    oddeven(175);
    return 0; 
}