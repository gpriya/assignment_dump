/*
Write a program to input a number from the user and also input a digit. 
Append a digit in the number and print the resulting number. 
(Example - number=234 and digit=9 then the resulting number is 2349)
*/
#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter a single digit: ");
    scanf("%d", &d);

    n = n * 10 + d;
    printf("Now the new number after appending is %d\n", n);

    return 0;
}