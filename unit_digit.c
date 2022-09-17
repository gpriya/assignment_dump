// Write a program to print unit digit of a given number
#include <stdio.h>

int main()
{
    int n, rem;
    printf("Enter a 2 digit number: ");
    scanf("%d", &n);
    rem = n % 10;
    printf("The unit digit of %d is %d\n", n, rem);

    return 0;
}