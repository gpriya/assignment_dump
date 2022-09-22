// Write a program to calculate sum of first N even natural numbers
#include <stdio.h>
int main()
{
    int n, sum, i;

    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i * 2;

    printf("Sum = %d\n", sum);
    
    return 0;
}