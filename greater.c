// Write a program to print greater between two numbers. Print one number of both are the same.
#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &m, &n);
    if (m > n)
        printf("%d is greater then %d\n", m, n);
    else if (n > m)
        printf("%d is greater then %d\n", n, m);
    else if (n == m)
        printf("%d is greater\n", m);

    return 0;
}