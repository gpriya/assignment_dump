// Write a program to print the first N even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n, i = 1, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    count = n;
    // first loop to get the nth even number, to print from reverse
    do
    {
        if (i % 2 == 0)
            --count;
        ++i;

    } while(count);

    count = n;
    do
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
            --count;
        }
        --i; 
    } while (count); 
    
    return 0;
}