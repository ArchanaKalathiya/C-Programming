// Program to determine whether a triangle is valid or not
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    int t1, t2, t3;
    printf("\nEnter the three sides of triangle");
    printf("\n S1: ");
    scanf("%d", &s1);
    printf("\n S2: ");
    scanf("%d", &s2);
    printf("\n S3: ");
    scanf("%d", &s3);
    t1 = s1 + s2;
    t2 = s1 + s3;
    t3 = s2 + s3;
    if (t1 > s3 && t2 > s2 && t3 > s3)
    {
        printf("\nTriangle is valid ");
    }
    else
    {
        printf("\nTriangle is not valid ");
    }
    return 0;
}