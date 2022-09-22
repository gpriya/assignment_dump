// Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
            --n;
        }
        ++i;
    } while (n);

    printf("Sum = %d\n", sum);
    
    return 0;
}