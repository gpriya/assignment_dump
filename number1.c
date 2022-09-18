// Write a program to make the last digit of a number stored in a variable 
// as zero.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number entered is %d\n", n);
    n = n / 10;
    n = n * 10;
    printf("The number now is %d\n", n);
    return 0;
}