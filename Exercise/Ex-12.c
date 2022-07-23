// Program to demostrate nesting of dissimilar types of loops
// Program to display a multiplication table of any number entered by a user
#include <stdio.h>
int main()
{
    int num, x, ctr;
    char ans;
    do
    {
        printf("\nEnter a no.");
        scanf("%d", &num);
        printf("\nTable 0f %d\n\n", num);
        for (ctr = 1; ctr <= 10; ctr++)
        {
            x = num * ctr;
            printf("\n%d x %d = %d\n",num, ctr, x);
        }
        printf("\nDo you want to continue ? Y/N ");
        scanf("%s", &ans);
    } while (ans == 'Y' || ans == 'y');
    return 0;
}