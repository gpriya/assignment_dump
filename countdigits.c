// Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int count, i;
    long long int n;
    
    printf("Enter a number: ");
    scanf("%lld", &n);

    for (i = 0; n != 0; i++)
        n = n / 10;

    printf("Digits = %d\n", i);
    return 0;
}