// Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int n, m, lcm;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &n, &m);

    for (lcm = n>m?n:m; lcm <= n*m; lcm++)
    {
        if (lcm % n == 0 && lcm % m == 0)
            break;
    }

    printf("LCM of %d and %d is %d\n", n, m, lcm);
    return 0;
}