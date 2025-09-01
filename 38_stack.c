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
        top++;//0
        stack[top]=no;//10
        printf("data insert into : %d\n",no);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("deleted successfully :%d",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
        printf("%d",stack[i]);
    }
}

int main()
{
    int choice,no;
    while(1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter your choice for stack opertion :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter number for push :");
                scanf("%d",&no);
                push(no);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
        }
        if(choice == 4)
        {
            break;
        }
    }
    return 0;
}



/*
4  50 top

3  40 
2  30 
1  20 
0  10  
*/
