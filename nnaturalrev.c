// Write a program to print the first N natural numbers in reverse order
#include <stdio.h>
int main()
{   
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i > 0; --i)
        printf("%d ", i);
    printf("\n");
    return 0;
}