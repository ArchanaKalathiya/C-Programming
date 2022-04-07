#include <stdio.h>

int main()
{
    // if-else (Nested if)
    int a;
    printf("Enter a :         \n");
    scanf("%d", &a);
    if (a < 100)
    {
        printf("%d < 100", a);
    }
    else
    { // Nested if
        if (a == 100)
        {
            printf("%d = 100", a);
        }
        else
        {
            printf("%d > 100", a);
        }
    }
    return 0;
}