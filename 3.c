// Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n = 10;
    while (n > 0)
    {
        printf("%d ", n);
        --n;
    }
    return 0;
}