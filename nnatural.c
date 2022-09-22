// Write a program to print the first N natural numbers.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
    return 0;
}