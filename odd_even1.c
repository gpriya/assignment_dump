// Write a program to check whether a given number is an even number or an odd number without using % operator.
#include <stdio.h>
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = n & 1;
    if (result == 0)
        printf("%d is even\n", n);
    else
        printf("%d is odd\n", n);
    return 0;
}