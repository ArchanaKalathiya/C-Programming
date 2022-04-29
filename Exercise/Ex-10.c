// Program to find whether rank is 1 or 2
#include <stdio.h>
int main()
{
    int marks, rank;
    printf("\nEnter your marks : ");
    scanf("%d", &marks);
    if (marks < 99 || marks > 100)
    {
        printf("\nNo rank");
    }
    else
    {
        rank = (marks == 100 ? 1 : 2);
        printf("\nRank = %d", rank);
    }
    return 0;
}