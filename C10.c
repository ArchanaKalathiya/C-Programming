// Program to demonstrate the use of continue statement
// Program to accept the valid chocie of menu
#include <stdio.h>
int main()
{
    int choice;
    do
    {
        printf("\n***************************** Main Menu *******************************");
        printf("\n1. Enter Data\n2. Make Querries\n3. Print Reports\n4. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 4)
        {
            printf("\nInvalid Choice");
            continue;
        }
        switch (choice)
        {
        case 1:
        case 2:
        case 3:
        case 4:
            printf("\nYour chocie is %d", choice);
        }
    } while ("choice!=4");
    return 0;
}