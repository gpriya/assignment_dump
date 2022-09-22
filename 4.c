// Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
    int i = 1, count = 0;
    for (i = 1; i <= 10; i++)
        printf("%d ", 2*i -1);
    printf("\n");
    return 0;
}