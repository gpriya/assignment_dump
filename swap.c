// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter 2 digits: ");
    scanf("%d %d", &m, &n);
    printf("Before m = %d, n = %d\n", m, n);
    m = m + n;
    n = m - n;
    m = m - n;
    printf("After swap m = %d, n = %d\n", m, n);

    return 0;
}