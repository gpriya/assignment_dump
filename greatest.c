// Write a program to find the greatest among three given numbers. 
// Print number once if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
        if (a > c)
            printf("%d\n", a);
        else
            printf("%d\n", c);
    else
        if (b > c)
            printf("%d\n", b);
        else
            printf("%d\n", c);
    return 0;
}
