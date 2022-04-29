// Program to display a messagr depending upon choice of user
#include <stdio.h>
int main()
{
    int choice;
    printf("\n***************** MENU ******************");
    printf("\n1. Breakfast\n2. Lunch\n3. Dinner\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\nGood Morning :) Sir, What do you want in Breakfast ");
        break;
    case 2:
        printf("\nGood Afternoon :) Sir, What do you want in Lunch ");
        break;
    case 3:
        printf("\nGood Evening :) Sir, What do you want in Dinner ");
        break;
    default:
        printf("\nInvalid Choice Sir , I cannot help you ");
    }
}