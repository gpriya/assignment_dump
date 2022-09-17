// Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The ascii value of %c is %d", c, c);

    return 0;
}