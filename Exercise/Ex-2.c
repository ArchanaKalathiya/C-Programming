// Check if the number entered by user is negative , positive or zero
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number :  \n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("%d is positive number ", num);
    }
    else
    {
        if (num == 0)
        {
            printf("Number is zero");
        }
        else
        {
            printf("%d is negative number", num);
        }
    }
    return 0;
}