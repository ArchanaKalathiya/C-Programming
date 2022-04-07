// Multiplication of number entered by user


#include <stdio.h>
int main()
{
    /* Print multiplication table of number entered by user   */

    int m, n;
    printf("Enter number to be multiplied : ");
    scanf("%d", &m);
    printf("Multiplication table of %d\n ", m);
    for (n = 1; n <= 10; n++)
    {
        printf("\n%d * %d = %d\n", m, n, m * n);
    }
    return 0;
}
