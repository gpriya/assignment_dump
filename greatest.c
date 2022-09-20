// Write a program to find the greatest among three given numbers. 
// Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is the greatest number\n", a);
    else if (b > a && b > c)
        printf("%d is the greatest number\n", b);
    else if (c > a && c > b)
        printf("%d is the greatest number\n", c);
    else if (a == b && a > c)
        printf("%d is the greatest number\n", a);
    else if (a == c && a > b)
        printf("%d is the greatest number\n", a);
    else if (b == c && b > a)
        printf("%d is the greatest\n", b);
    else
        printf("%d is the greatest number\n", a);
    
    return 0;
}
