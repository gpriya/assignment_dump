// Write a program to check whether a given number is positive, 
// negative or zero.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Negative number\n");
    else if (n == 0)
        printf("Zero\n");
    else if (n > 0)
        printf("Positive number\n");
    return 0;
}