// Program to calculate sum og digits
#include <stdio.h>
int main()
{
    int n, rd, sum = 0;
    printf("\nEnter a numeber : ");
    scanf("%d", &n);
    do
    {
        rd = n % 10;
        sum += rd;
        n /= 10;

    } while (n > 0);
    printf("\nSum of the digits is %d", sum);
    return 0;
}