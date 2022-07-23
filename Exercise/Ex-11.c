// Program to use nested for loops
#include <stdio.h>
int main()
{
    int a, b, c;
    for (a = 0; a <= 1; a++)
    {
        for (b = 10; b >= 8; b--)
        {
            for (c = 100; c >= 101; c++)
            {
                printf("\n a=%d b=%d c=%d", a, b, c);
            }
        }
    }
    return 0;
}