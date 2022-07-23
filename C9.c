#include <stdio.h>

int main()
{
    int i, Number, count = 0;

    printf("\nEnter any number to Check  = ");
    scanf("%d", &Number);

    for (i = 2; i <= Number / 2; i++)
    {
        if (Number % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0 && Number != 1)
    {
        printf("\n %d is a Prime Number", Number);
    }
    else
    {
        printf("\n %d is Not a prime number", Number);
    }
    return 0;
}