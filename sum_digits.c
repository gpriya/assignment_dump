// Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int n, sum = 0, temp;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    temp = n;
    sum = sum + (temp % 10);
    temp = temp / 10;
    sum = sum + (temp % 10);
    temp = temp / 10;
    sum = sum + (temp % 10);
    temp = temp / 10;
    printf("The sum of %d is %d\n", n, sum);
    
    return 0;
}