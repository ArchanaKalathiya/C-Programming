// Check the maximum number
#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter number 1 :   \n");
    scanf("%d", &n1);
    printf("Enter number 2 :   \n");
    scanf("%d", &n2);
    printf("Enter number 3 :   \n");
    scanf("%d", &n3);
    if (n1 > n2)
    {
        printf("Maximum = %d\n", n1);
    }
    else if (n2 > n3)
    {
        printf("Maximum = %d\n", n2);
    }
    else
    {
        printf("Maximum = %d\n", n3);
    }
    return 0;
}