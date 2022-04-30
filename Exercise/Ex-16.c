// Program to count no. of vowels and non-vowels
#include <stdio.h>
int main()
{
    char alpha = ' ';
    int vow, nvow,con;
    vow = 0;
    con = 0;
    while (alpha != '!')
    {
        printf("\nEnter a character : ");
        scanf("%c", &alpha);
        switch (alpha)
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            vow++;
            break;
            default:
            nvow++;
        }
    }
    printf("\nNo. of vowels entererd %d", vow);
    printf("\nNo. of Non-vowels entered %d", nvow);
    return 0;
}