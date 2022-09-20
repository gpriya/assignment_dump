// Write a program to check whether a given character is an 
// alphabet (uppercase), 
// an alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase\n");
    else if (ch >= 'a' && ch <= 'z')
        printf("Lowercase\n");
    else if (ch >= 48 && ch <= 57)
        printf("Digit\n");
    else if (ch >= 32 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 126)
        printf("Special character\n");

    return 0;
}