#include<stdio.h>

int main()
{
    int no,i;
    char name[30];

    printf("Enter name :");//Ayushiba
    for(i=0;i<=30;i++)
    {
        scanf("%c",&name[i]);
        if(name[i]=='\n')
        {
            break;
        }
    }

    printf("=================\n");

    for(i=0;i<=30;i++)
    {
        no=i;
        printf("%c",name[i]);
        if(name[i]=='\n')
        {
            break;
        }
    }

    for(i=no;i>=0;i--)
    {
      printf("%c",name[i]);
    }
    return 0;
}