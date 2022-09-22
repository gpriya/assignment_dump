// Write a program to print the first 10 odd natural numbers in 
// reverse order.
#include <stdio.h>
int main()
{
    int i = 19, count = 0;
    for (i = 10; i>= 1; i--)
        printf("%d ", 2*i - 1);
    printf("\n");
    return 0;
}