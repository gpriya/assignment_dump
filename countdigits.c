// Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int count, i;
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    count = 0;
    while (n)
    {
        n = n / 10;
        ++count;
    }
    printf("Digits = %d\n", count);
    return 0;
}