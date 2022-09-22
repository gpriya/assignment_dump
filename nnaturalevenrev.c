// Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n, i = 1, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; --i)
        printf("%d ", 2*i);
    printf("\n");
    return 0;
}