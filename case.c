// Write a program to check whether a given alphabet is in uppercase 
// or lowercase.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet bettwen A-Z or a-z: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
        printf("%c is uppercase\n", ch);
    else
        printf("%c is lowercase\n", ch);

    return 0;
}