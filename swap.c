// Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int m, n, temp;
    printf("Enter 2 digits: ");
    scanf("%d %d", &m, &n);
    printf("Before m = %d, n = %d\n", m, n);
    temp = m;
    m = n;
    n = temp;
    printf("After swap m = %d, n = %d\n", m, n);

    return 0;
}