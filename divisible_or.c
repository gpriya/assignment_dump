// Write a program to check whether a given number is divisible 
// by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 7 == 0)
    {
        if (n % 3 == 0)
            printf("%d is divisble by 7 or 3\n", n);
        else
            printf("%d is divisble by 7\n", n);
    }
    else if (n % 3 == 0)
    {
        if (n % 7 == 0)
            printf("%d is divisble by 7 or 3\n", n);
        else
            printf("%d is divisble by 3\n", n);

    }    
    else
        printf("Not divisble by 7 or 3\n");

    return 0;
}