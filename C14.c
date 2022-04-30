// Program to calculate the area of a circle without using function prototype
#include <stdio.h>
void main()
{
    float r, area;
    printf("Enter the radius  of a circle ");
    scanf("%f", &r);
    area = areafunc(r);
    printf("\nArea of a circle = %f", area);
}
void areafunc(float r)
{
    float a;
    a = 3.14 * r * r;
    return (a);
}
