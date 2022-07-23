// Program to calculate factorial of a number
// Without using recursive function
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, f;
    printf("\nEnter a number");
    scanf("%d", &n);
    f = fact(n);
    printf("\nFactorial of %d is %d", n, f);
}
void fact(int x)
{
    int a = 1, i;
    for (i = x; i >= 1; i--)
        a = a * i;
    return (a);
}