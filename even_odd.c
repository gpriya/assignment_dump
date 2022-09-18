// Write a program to check whether the given number is even or odd 
// using a bitwise operator.
#include <stdio.h>
int main()
{
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = n & 1;
    if(result == 0)
        printf("Number %d is even\n", n);
    else
        printf("Number is odd\n");
    return 0;
}
