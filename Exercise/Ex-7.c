// Program to display an error in input

#include <stdio.h>
int main()
{
    char alpha;
    printf("\nEnter only alphabet : ");
    scanf("%c", &alpha);
    if (alpha >= 'A' && alpha <= 'Z')
    {
        printf("\nAlphabet is capital");
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        printf("\nAlphabet is small");
    }
    else
        goto errorline;
errorline:
    printf("\nInvalid Input");
}