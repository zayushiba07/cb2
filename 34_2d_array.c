#include<stdio.h>

int main()
{
    int row,column,i,j;
    printf("Enter row for matrix array:");
    scanf("%d",&row);
     printf("Enter column for matrix array:");
    scanf("%d",&column);

    int matrix[row][column];
    

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("Enter number [%d][%d]:",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;


}