// Program to find whether the given input is capital , small or any other
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\nThe input charater is in Capital letter");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\nThe input character is in small letter");
    }
    else
    {
        printf("\nThe input character is not a alphabet");
    }
    return 0;
}