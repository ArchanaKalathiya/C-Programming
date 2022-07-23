// Program to demonstrate the use of for statement
// Program to display the multiplication table of 2
#include <stdio.h>
int main()
{
    int i, n;
    printf("\nTable of 2\n\n");
    for (i = 1; i < 11; i++)
    {
        n = 2 * i;
        printf("2 x %2d = %2d\n", i, n);
    }
    return 0;
}