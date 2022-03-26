#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a and b : \n");
    scanf("%d%d", &a, &b);

    // Algebric operators

    printf("a+b = %d\n", a + b);
    printf("a-b = %d\n", a - b);
    printf("a*b = %d\n", a * b);
    printf("a/b = %d\n", a / b);
    printf("a modulus b = %d\n", a % b);
    printf("Enter c and d : \n");
    scanf("%d%d", &c, &d);

    // Logical operators - (!)Not operator

    printf("c or d = %d\n", c || d);
    printf("c and d = %d\n", c && d);

    return 0;
}