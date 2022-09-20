// Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
        printf("Number %d is positive\n", n);
    else
        printf("Number %d is non positive\n", n);
    return 0;
}