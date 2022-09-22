// Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n, num, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    num = 0;
    while (temp)
    {
        num = num * 10 + temp % 10;
        temp = temp / 10;
    }
    printf("Original: %d, Reverse: %d\n", n, num);
    return 0;
}