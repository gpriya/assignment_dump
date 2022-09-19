// Write a program to take a three-digit number from the user and rotate its 
// digits by one position towards the right.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    printf("Before rotation: %d\n", n);
    n = n % 10 * 100 + n / 10;
    printf("After rotation: %d\n", n);

    return 0;
}