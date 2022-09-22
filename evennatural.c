// Write a program to print the first N even natural numbers
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    do
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
            --n;
        }
            
        ++i;

    } while(n);

    return 0;
}