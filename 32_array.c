#include <stdio.h>

int main()
{
    int choice, roll_no, total = 0, i;
    float avg;

    printf("Enter roll no: ");
    scanf("%d", &roll_no);

    printf("Enter number of subjects: ");
    scanf("%d", &choice);

    int subject[choice];   

    for(i = 0; i < choice; i++)
    {
        printf("Enter subject [%d]: ", i+1);
        scanf("%d", &subject[i]);
        total += subject[i];
    }

    avg = (float)total / choice;

    printf("\nRoll no: %d\n", roll_no);
    for(i = 0; i < choice; i++)
    {
        printf("Subject [%d]: %d\n", i+1, subject[i]);
    }
    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    return 0;
}
