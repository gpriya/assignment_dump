// Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = n;
    n = n / 10;
    if (n == 0)
        printf("%d is not a 3 digit number\n", temp);
    else
    {
        n = n / 10;
        if (n == 0)
            printf("%d is not a 3 digit number\n", temp);
        else
        {
            n = n / 10;
            if (n == 0)
                printf("%d is a 3 digit number\n", temp);
            else
               printf("%d is not a 3 digit number\n", temp);
        }
        
    }
    return 0;
}