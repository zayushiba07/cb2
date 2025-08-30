#include<stdio.h>

union account
{
    double accoutNo;
    char acc_name[20];
    int balance;
};
int main()
{
    union account a1;
    printf("Enter account No :");
    scanf("%lf",&a1.accoutNo);
    printf("accout no :%lf\n",a1.accoutNo);
    printf("Enter name :");
    scanf("%s",&a1.acc_name);
    printf("accout name :%s\n",a1.acc_name);
    printf("Enter balance :");
    scanf("%d",&a1.balance);
    printf("accout balance :%d",a1.balance);
    return 0;
}
