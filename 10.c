// Write a program to print a table of 5.
#include <stdio.h>
int main()
{   
    int i = 5, j;
    for (j = 1; j <= 10; j++)
    {
        printf("%d x %d = %d\n", i, j, i * j);

    }
    return 0;
}