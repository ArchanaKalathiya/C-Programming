// Program where calling function calls another function
#include <stdio.h>
int main(void)
{
    printf("\nHello everyone !");
    message();
    printf("\nFunctions");
}
void message(void)
{
    printf("\nLet us learn");
    message1();
}
void message1(void)
{
    printf(" and explore");
}