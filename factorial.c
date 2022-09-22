// Write a program to calculate factorial of a number
#include <stdio.h>
int main()
{
    int n, i;
    long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i > 0; --i)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is %ld\n", n, fact);
    return 0;
}