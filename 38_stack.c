#include<stdio.h>

int top=-1,stack[5],no;
void push(int no)
{
    if(top == 5-1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        stack[top]=no;
        printf("data insert into : %d\n",no);
    }
}

/*
4  50 top
3  40 
2  30 
1  20 
0  10  
*/
