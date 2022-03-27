// Write a program to give grade by entering a gaine marks out of 100 
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks :   \n");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75)
    {
        printf("Grade B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Grade D\n");
    }
    return 0;
}