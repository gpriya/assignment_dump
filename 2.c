// 2. Write a program to print the first 10 natural numbers.
#include <stdio.h>
int main()
{
    int n = 1;
    while (n <= 10)
    {
        printf("%d ", n);
        ++n;
    }
    printf("\n");
    return 0;
}