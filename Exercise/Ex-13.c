// Program to generate  a table of triangular nos.
#include <stdio.h>
int main()
{
    int n, tn;
    printf("\n\n\t\t\tTable of Triangular Numbers\n\n");
    printf("\t\t\t---------------------------------\n");
    printf("\t\t\t  n          Sum from 1 to n \n");
    printf("\t\t\t---------------------------------\n");
    tn = 0;
    for (n = 1; n <= 10; ++n)
    {
        tn = tn + n;
        printf("\t\t\t  %2d                 %2d\n", n, tn);
    }
    printf("\t\t\t-------------------------------\n");
}