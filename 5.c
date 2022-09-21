// Write a program to print the first 10 odd natural numbers in 
// reverse order.
#include <stdio.h>
int main()
{
    int i = 19, count = 0;
    do 
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            count++;
        }
            
        i--;

    }while(count< 10);
    return 0;
}