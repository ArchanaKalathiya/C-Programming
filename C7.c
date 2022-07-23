// Program to demonstrate the use of while statement
// Program to calculate the average of 10 numbers
#include <stdio.h>
int main()
{
    int n, s, c;
    float a;
    s = 0;
    c = 0;
    while (c < 10)
    {
        printf("\nEnter a number %d", c);
        scanf("%d", &n);
        s = s + n;
        c++;
    }
    a = (float)s / c;
    printf("\nAverage = %f", a);
    return 0;
}
