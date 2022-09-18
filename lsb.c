// Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int n = 6, result = 0;
    int count = 0;

    printf("Checking the first 1 in LSB of %d\n", n);
    result = n & 1;
    count++;
    if (result == 1)
        printf("1 is at %d position\n", count);
    n = n >> 1;

    result = n & 1;
    count++;
    if (result == 1)
        printf("1 is at %d position\n", count);
    n = n >> 1;

    return 0;
}