// Write a program to calculate sum of first N natural numbers
#include <stdio.h>
int main()
{
    int n, i, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1, sum = 0; i <= n; i++)
        sum = sum + i;
    printf ("Sum = %d\n", sum);
    return 0;
}