// Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int n, num;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n / 10;
    printf("The given number is %d, new number is %d\n", n, num);
    return 0;
}