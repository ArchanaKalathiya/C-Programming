// Program to determine whether the input is a vowel
#include <stdio.h>
    int
    main()
{
    char alpha;
    puts("Enter an alphabet : ");
    scanf("%c", &alpha);
    switch (alpha)
    {
    case 'a':
    case 'A':
        puts("a is vowel");
        break;
    case 'e':
    case 'E':
        puts("e is vowel");
        break;
    case 'i':
    case 'I':
        puts("i is vowel");
        break;
    case 'o':
    case 'O':
        puts("o is vowel");
        break;
    case 'u':
    case 'U':
        puts("u is vowel");
        break;
    default:
        puts("Entered character is not a vowel");
    }
}