#include<stdio.h>

int queue[5],front=-1,rear=-1;
void enqueue(int no)
{
    if(rear == 5-1)
    {
        printf("queue is full");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=no;
        printf("queue inserted : %d",no);
    }
}
void dequque()
{
    if(front == -1 || front>rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("queue is deleted : %d",queue[front]);
        front++;
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%2d",queue[i]);
    }
}
int main()
{
    int choice,no;
    while(1)
    {
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        printf("Enter your choice for stack opertion :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter number for enqueue :");
                scanf("%d",&no);
                enqueue(no);
                break;
            case 2:
                dequque();
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
