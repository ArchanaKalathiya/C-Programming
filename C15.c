// Program to calculate factorial of a number using recursion
#include <stdio.h>
void main()
{
    int n, f;
    printf("\nEnter a numbber : ");
    scanf("%d", &n);
    f = fact(n);
    printf("\nThe factorial of %d is %d", n, f);
}
fact(int x)
{
    int a;
    if (x == 1)
        return(1);
    else
        a=x*fact(x - 1);
    return(a);
}