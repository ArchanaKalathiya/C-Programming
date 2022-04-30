// Program to generate Floyd's triangle of numbers
#include <stdio.h>
int main()
{
    int r, c, n = 1;
    for (r = 1; r <= 13; r++)
    {
        printf("\n");
        for (c = 1; c <= r; c++)
        {
            printf(" %d ", n);
            n++;
        }
    }
    return 0;
}