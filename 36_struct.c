#include<stdio.h>

struct student
{
    int rno,marks[5],age,total;
    char name[30];
};
int main()
{
    struct student s1;
    int i;
    s1.total=0;
    printf("Enter roll no :");
    scanf("%d",&s1.rno);
    printf("Enter name :");
    scanf("%s",&s1.name);
    printf("Enter age :");
    scanf("%d",&s1.age);
    for(i=0;i<5;i++)
    {
        printf("Enter subject mark[%d]",i+1);
        scanf("%d",&s1.marks[i]);
        s1.total += s1.marks[i];//s1.total = s1.total + s1.marks[i]
    }
    printf(".......student data display.....\n");

    printf("Roll no :%d\n",s1.rno);
    printf("Name :%s\n",s1.name);
    printf("Age :%d\n",s1.age);
    for(i=0;i<5;i++)
    {
        printf("marks is :%d\n",s1.marks[i]);
    }
    printf("Total is : %d\n",s1.total);
    return 0;
}
