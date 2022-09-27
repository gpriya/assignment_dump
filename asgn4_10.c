// How to convert a Decimal number into a Binary number and vice versa.
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; n > 0; i++)
    {
        printf("%d", n % 2);
        n = n / 2;
    }
    printf("%d", n);
    return 0;
}