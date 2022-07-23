// Program to find the result and division
#include <stdio.h>
int main()
{
    char name[20];
    float mobt, mm, perc;
    printf("\n--------------------------------------------\n");
    printf("\n        FINDING THE RESULT & DIVISION       \n");
    printf("\n--------------------------------------------\n");
    printf("Name   :");
    gets(name);
    printf("Marks obtained :");
    scanf("%4f", &mobt);
    printf("Maximum Marks :");
    scanf("%4f", &mm);
    perc = mobt * 100 / mm;
    printf("\nPercentage :%7.2f", perc);
    printf("\nRESULT : ");
    if (perc >= 40)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    printf("\nDivision:");
    if (perc >= 40 && perc < 50)
    {
        printf("\nIII Divison");
    }
    if (perc >= 50 && perc < 60)
    {
        printf("\nII Division");
    }
    if (perc >= 60)
    {
        printf("I Division");
    }
    printf("\n--------------------------------------------");
    return 0;
}