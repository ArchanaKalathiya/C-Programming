// Program to demonstrate the use of Nested if-else 
// Program to find the grade of marks obtained 

#include <stdio.h>
int main()
{
    int perc;
    printf("\nEnter percentage of your marks obtained : ");
    scanf("%d",&perc);
    if (perc<60)
    {
        if(perc>=50)
        {
            printf("\nGrade B\n");
        }
        else 
        {
            printf("\nGrade C\n");
        }
    }
    else 
    {
        printf("\nGrade A\n");
    }
    return 0;
}