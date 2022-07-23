// Program to calculate area of rectangle
#include <stdio.h>
main()
{
    int l, b, area;
    printf("\nEnter length of the rectangle");
    scanf("%d", &l);
    printf("\nEnter the breadth of the rectangle ");
    scanf("%d", &b);
    area=areafunc(l, b);
    printf("\nThe area of rectangle is %d", area);
}
areafunc(a, b) int a, b;
{
    int c;
    c = a * b;
    return (c);
}